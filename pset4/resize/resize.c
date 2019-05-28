// Copies a BMP file

#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        fprintf(stderr, "Usage: copy infile outfile\n");
        return 1;
    }

    int n;
    n=atoi(argv[2]);

    if(n<0 || n>100)
    {
        fprintf(stderr, "Usage: value should be 0 to 99");
        return 5;
    }

    // remember filenames
    char *infile = argv[2];
    char *outfile = argv[3];

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }

    // determine padding for scanlines
    int oldpadding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    long oldwidth=bi.biWidth;
    long oldheight=bi.biHeight;

      //New width and height
     bi.biWidth=bi.biWidth*n;
     bi.biHeight=bi.biHeight*n;

     //new padding for resize Image
    int newpadding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

      //biSizeImage
       bi.biSizeImage=((sizeof(RGBTRIPLE)* bi.biWidth +newpadding * abs(bi.biHeight)));
       //bfSizeImage
       bf.bfSize= bi.biSizeImage +sizeof(BITMAPFILEHEADER)+sizeof(BITMAPINFOHEADER);

    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);



    //array to storing a pixels
    RGBTRIPLE pixel[bi.biWidth*sizeof(RGBTRIPLE)];

    // iterate over infile's scanlines
    for (int i = 0, biHeight =abs(bi.biHeight); i < biHeight; i++)
    {
        // iterate over pixels in scanline
        for (int j = 0; j < bi.biWidth; j++)
        {
            // temporary storage
            RGBTRIPLE triple;

            // read RGB triple from infile
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);
              for(int k=0; k<n; k++)
              {
                   pixel[k+(j*n)]=triple;
              }
        }
    for(int x=0; x<n; x++)
    {
        fwrite(&pixel, sizeof(RGBTRIPLE), 1, outptr);
        for (int k = 0; k < newpadding; k++)
        {
            fputc(0x00, outptr);
        }
    }
         // skip over padding, if any
        fseek(inptr, oldpadding, SEEK_END);

    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}

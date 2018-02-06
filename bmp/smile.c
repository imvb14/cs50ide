#include<stdio.h>
#include<stdlib.h>

#include "bmp.h"

int main(void)
{



    // open input file
    FILE *inptr = fopen("small.bmp", "r");
    if (inptr == NULL)
    {
        //fprintf(stderr, "Could not open %s.\n", small.bmp);
        return 2;
    }

    // open output file
    FILE *outptr = fopen("smile.bmp", "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        //fprintf(stderr, "Could not create %s.\n", smile.bmp);
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

    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

    // determine padding for scanlines
    int padding =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

        // skip over padding, if any
        fseek(inptr, padding, SEEK_CUR);

    // iterate over infile's scanlines
    for (int i = 0;i < 5; i++)
    {
        // iterate over pixels in scanline
        // temporary storage
            RGBTRIPLE triple;

            // read RGB triple from infile
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);


            fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
                   // then add it back (to demonstrate how)
        for (int k = 0; k < padding; k++)
        {
            fputc(0x00, outptr);
        }


    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}


            // write RGB triple to outfile

        }


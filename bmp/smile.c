#include<stdio.h>
#include<stdlib.h>

#include "bmp.h"

int main(void)
{



    // open input file
    FILE *inptr = fopen("large.bmp", "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open.\n");
        return 2;
    }

    // open output file
    FILE *outptr = fopen("smile.bmp", "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create.\n");
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

    // iterate over infile's scanlines

        // iterate over pixels in scanline
        // temporary storage
            RGBTRIPLE triple;
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);
            // read RGB triple from infile
            fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);


    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;


}


# Questions

## What's `stdint.h`?

stdint.h is header file it's used to create unsigned integer in 32 bits or 16 bits unit8_t and so on

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

uint8_t is unsigend integer it gives 8 bits. It create a datatype like BYTE it is used to store bitmaps bytes.

uint32_t is unsigend integer it gives 32 bits. It create a datatype like DWORD is used to store bitmap size

int32_t is sigend interger. It create a datatype like LONG is used to store the information of bitmap

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

BYTE is 1 byte

DWORD is 4 bytes

LONG is 4 bytes

WORD is 2 bytes

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

The first two bytes will be hexadecimal

## What's the difference between `bfSize` and `biSize`?

bfSize is a variable it belongs BITMAPFILEHEADER it calculate size of the bitmap image

biSize is a variable it belongs BITMAPINFOHEADER it calculate size of the pixel

## What does it mean if `biHeight` is negative?

suppose biHeight is negative it's not bitmap imgae file

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biXPelsPerMeter
biYPelsPerMeter

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

In some cases os does not provide a memory in such cases it could return NULL

## Why is the third argument to `fread` always `1` in our code?

we want only one byte aka (pixel) per time.

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

0.18

## What does `fseek` do?

Tracker the cursor or end of the line or file

## What is `SEEK_CUR`?

Track the cursor

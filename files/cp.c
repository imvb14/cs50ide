#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    if (argc != 3)
    {
        printf("Usage: cp source destination\n");
        return 1;
    }

     char *infile= argv[1];

     char *outfile= argv[2];

      FILE *fp=fopen(infile, "r") ;

        if(fp == NULL)
        {
            printf("colud not open file\n");
        }

      FILE *copy=fopen(outfile, "w");

        if(copy == NULL)
        {
            printf("colud not write file\n");
        }

     char ch;

     while((ch = fgetc(fp)) != EOF)
     {
         fputc(ch,copy);
     }
    fclose(fp);
    fclose(copy);

}
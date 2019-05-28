#include<stdio.h>
#include<string.h>

int main(void)
{
   const char *mytext = "The quick brown fox jumps over the lazy dog";
    FILE *bfp= fopen("test.txt", "wb");

    if (bfp)
    {
            fwrite(mytext, strlen(mytext), 1, bfp);
            //OR
            //fwrite(mytest, sizeof(char), strlen(mytext),bfp);
            fprintf(bfp,"\n");
            fclose(bfp);
    }
}
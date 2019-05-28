#include <stdio.h>

int main(int argc, char** argv)
{
    // for each command line argument
    for(int i = 1; i < argc; i++)
    {
        // print argument, be sure to add a trailing space
        printf("%s ", argv[i]);
    }

    // add trailing newline at the end
    printf("\n");
}
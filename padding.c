#include<stdio.h>

int main(void)
{
    int padding =  (3 * 24);
        padding = padding % 4;
        padding = 4- padding;
        padding = padding % 4;
    printf("%i\n", padding);
}
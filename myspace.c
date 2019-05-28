
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // get string from user
    string input = GetString();

    bool capitalize = true;

    // for each character of string
    for (int i = 0, j = strlen(input); i < j; i++)
    {
        // if character is a letter
        if (isalpha(input[i]))
        {
            // if letter should be capitalized
            if (capitalize == true)

                // print capitalized letter
                printf("%c", toupper(input[i]));

            else

                // print lowercase letter
                printf("%c", input[i]);

            // flip bool
            capitalize = !capitalize;
        }

        // if character is a space
        else

            // print space
            printf("%c", input[i]);
    }

}
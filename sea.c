#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc, string argv[])
{

    if (argc == 2)
    {
        //converts string to int. eg "5" to 5
        int caesar_key = atoi(argv[1]);

        //gets plain text
        string plain_text = get_string("Enter plain text: \n");

        //loop through each element of string
        for (int i = 0, n = strlen(plain_text); i < n; i++)
        {
            //checks if the ith character is a letter
            if (isalpha(plain_text[i]))
            {
                if (isupper(plain_text[i]))
                {
                    plain_text[i] = toupper((plain_text[i] + caesar_key) % 26);
                    printf("%c", plain_text[i]);
                }
                else
                {
                    plain_text[i] = (plain_text[i] + caesar_key) % 26;
                    printf("%c", plain_text[i]);
                }
            }
        }

        printf("%s\n", plain_text);
    }
    else
    {
        printf("wrong input\n");
    }
}
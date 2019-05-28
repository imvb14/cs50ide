#include<cs50.h>
#include<math.h>
#include<string.h>
#include<stdio.h>


int main()
{
    //char s[3] = {'a','b','c'};


    char a[3]={'a','b','c'};
    char b[3]={'d','e','f'};
    char c[3]={'g','h','i'};
    char d[3]={'j','k','l'};
    char e[3]={'m','n','o'};
    char f[4]={'p','q','r','s'};
    char g[3]={'t','u','v'};
    char h[4]={'w','x','y','z'};

     string s;
     s= get_string();

    for(int i=0; i<strlen(s); i++)
    {
        for(int j=0; j<3; j++)
        {
            if(s[i] == a[j])
            {
                printf("%d",2);
            }
            else if(s[i] == b[j])
            {
                printf("%d",3);
            }
            else if(s[i] == c[j])
            {
                printf("%d",4);
            }
            else if(s[i] == d[j])
            {
                printf("%d",5);
            }
            else if(s[i] == e[j])
            {
                printf("%d",6);
            }
            else if(s[i] == g[j])
            {
                printf("%d",8);
            }
        }
        for(int j=0; j<4; j++)
        {
            if(s[i] == f[j])
            {
                printf("%d",7);
            }
            else if(s[i] == h[j])
            {
                printf("%d",);
            }
        }
    }

}

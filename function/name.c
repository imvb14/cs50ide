#include<stdio.h>
#include<cs50.h>

void PrintName(string name);

int main(void)
{
    printf("state your name please: ");
    string s=GetString();
    PrintName(s);
    
}

void PrintName(string name)
{
    
    printf("hai %s!\n",name);
    
}

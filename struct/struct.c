#include<cs50.h>
#include<stdio.h>
#include "sample.h"
#include<string.h>

person fillStruct(void);
void showStruct(person p);

int main(void)
{

  showStruct(fillStruct());

}

person fillStruct(void)
{
   person p1;

    printf("enter your age: ");

    p1.age=get_int();
    printf("enter your name: ");
    scanf("%s", p1.name);
    return (p1);
}

void showStruct(person p)
{
    printf("%s is %d years old\n", p.name,p.age);

}
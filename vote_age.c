#include <stdio.h>

int main()
{
    int age;
    printf("Tell me your age\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible!");
    }
    else
    {
        printf("you are not eligible");
    }
}
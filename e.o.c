#include <stdio.h>

int main()
{
    int num;
    printf("Tell me a Number\n");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("It is a Even Number");
    }
    else
    {
        printf("It is Odd Number");
    }
}
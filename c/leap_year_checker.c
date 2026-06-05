#include <stdio.h>

int main()
{
    int year;
    printf("Tell me a year to check\n");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("%d is a leap year!!",year);
    }
    else
    {
        printf("%d is not a leap year!!",year);
    }
}
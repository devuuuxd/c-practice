#include<stdio.h>
int main()
{
    int num;
    printf("Tell me a Number\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("It is positive!");
    }
    else if (num<0)
    {
        printf("It is Negative!");
    }
        else if (num==0)
    {
        printf("It is zero!");
    }
    else
    {
        printf("Tell a Valid integer!");
    }
}
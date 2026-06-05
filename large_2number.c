#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Tell me 1st number and then 2nd\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is greater than %d",num1,num2);
    }
    else if (num2==num1)
    {
        printf("Both are Same");
    }
    else
    {
        printf("%d is greater than%d",num2,num1);
    }
}
#include <stdio.h>
int main()
{
    int i,num,sum;
    sum = 0;
    printf("Tell me a Number\n");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("sum of %d is %d",num,sum);
}
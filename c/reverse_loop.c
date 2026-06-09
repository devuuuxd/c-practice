#include <stdio.h>

int main()
{
    int i,inte;
    printf("Tell me a Number!\n");
    scanf("%d",&inte);
    for (i=inte;i>=0;i--)
    {
        printf("%d\n",i);
    }
}
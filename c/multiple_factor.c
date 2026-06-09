#include <stdio.h>
int main()
{
    int i,inte;
    printf("Tell me a Number!\n");
    scanf("%d",&inte);
    for(i=1;i<=inte;i++)
    {
        if (inte % i == 0)
        {
            printf("%d is factor of %d\n",i,inte);
        }
    }
}
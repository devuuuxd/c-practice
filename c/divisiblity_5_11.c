#include <stdio.h>

int main()
{
    int inte;
    printf("Tell me a Number!\n");
    scanf("%d",&inte);
    if (inte % 5 == 0 && inte % 11 == 0)
    {
        printf("%d is divisible by both 5 and 11!",inte);
    }
    else if (inte % 5 == 0)
    {
        printf("%d is divisible by 5!",inte);
    }
    else if (inte % 11 == 0)
    {
        printf("%d is divisible by 11!",inte);
    }
    else
    {
        printf("Not divisible by any!");
    }
}
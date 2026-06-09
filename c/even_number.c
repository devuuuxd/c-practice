#include <stdio.h>

int main()
{
    int i;
    for (i=0;i<=100;i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even and between 1 and 100\n",i);
        }
    }
}
#include <stdio.h>

int main()
{
    int side_one,side_two,side_three;
    printf("Tell me all 3 side length of triangle\n");
    printf("First Side\n");
    scanf("%d",&side_one);
    printf("Second Side\n");
    scanf("%d",&side_two);
    printf("Third Side\n");
    scanf("%d",&side_three);
    if (side_one + side_two >= side_three || side_two + side_three >= side_one || side_one + side_three >= side_two)
    {
        if (side_one == side_two && side_one == side_three)
        {
            printf("It is an Equilateral Triangle!");
        }
        else if (side_one == side_two || side_one == side_three || side_three == side_two)
        {
            printf("It is an Isosceles Triangle!");
        }
        else
        {
            printf("It is a Scalene Triangle!");
        }
    }
    else
    {
        printf("Its not a Valid Triangle!!");
    }
}
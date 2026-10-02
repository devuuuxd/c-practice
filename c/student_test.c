#include <stdio.h>

int calculateTotal(int *arr)
{
    int total = 0, i = 0;

    while (i <= 5)
    {
        total += arr[i];
        i++;
    }

    printf("Total Marks is %d\n", total);

    return total;
}

float calculateAverage(int *arr)
{
    float total = 0;
    int i = 0;

    while (i <= 5)
    {
        total += arr[i];
        i++;
    }

    return total / 6.0;
}

void calculateGrade(int *arr)
{
    float average = calculateAverage(arr);

    if (average >= 500)
    {
        printf("Grade A\n");
    }
    else if (average >= 400)
    {
        printf("Grade B\n");
    }
    else if (average >= 300)
    {
        printf("Grade C\n");
    }
    else if (average >= 200)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    int marks[6], i = 0, mark, choice = 0;

    while (i <= 5)
    {
        printf("Tell me Marks: ");
        scanf("%d", &mark);

        marks[i] = mark;
        i++;
    }

    while (choice != 4)
    {
        printf("\nChoose a function\n");
        printf("1. calculateTotal()\n");
        printf("2. calculateAverage()\n");
        printf("3. calculateGrade()\n");
        printf("4. Exit\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            calculateTotal(marks);
            break;

        case 2:
        {
            float avg_marks = calculateAverage(marks);
            printf("Average Marks is %.2f\n", avg_marks);
            break;
        }

        case 3:
            calculateGrade(marks);
            break;

        case 4:
            printf("Thank you...\n");
            break;

        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}
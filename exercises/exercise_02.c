#include <stdio.h>

int main()
{
    int number;

    printf("\nPlease enter a number: ");
    scanf("%d", &number);

    if (number > 00)
    {
        printf("\nNumber %d is positive\n", number);
    }
    else if (number < 0)
    {
        printf("\nNumber %d is negative\n", number);
    }
    else
    {
        printf("\nNumber %d is equal to zero\n", number);
    }

    return 0;
}
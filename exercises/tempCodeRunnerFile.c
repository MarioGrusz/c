
int main()
{

    int year;
    printf("\nPlease enter a year: ");
    scanf("\n%d", &year);

    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("\nYear %d is a leap year", year);
    }
    else if (year % 4 == 0 && year % 400 == 0)
    {
        printf("\nYear %d is a leap year", year);
    }
    else
    {
        printf("\nYear %d is not a leap year", year);
    }

    return 0;
}
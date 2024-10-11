#include <stdio.h>
#include <ctype.h>

int main()
{

    char ch;
    printf("\nPlease enter one letter: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if (isalpha(ch))
    {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("The character '%c' is a vowel.\n", ch);
        }
        else
        {
            printf("The character '%c' is a consonant.\n", ch);
        }
    }
    else
    {
        printf("Invalid input. Please enter a single alphabet character.\n");
    }

    return 0;
}
#include <stdio.h>
#include <ctype.h>


int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("Enter the temp in Celsius: \n");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1f\n", temp);
    }
    else if(unit == 'F'){
        printf("Enter the temp in Farenheit: \n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f\n", temp);
    }
    else {
        printf("\n %c in not a valid unit of measurement\n", unit);
    }

    return 0;
}


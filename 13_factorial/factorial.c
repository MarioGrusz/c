#include <stdio.h>


int factorial(int n){
    if(n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {

    int number;
    printf("\nPrint enter a non-negative integer: ");
    scanf("%d", &number);

    if(number < 0){
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(number);
        printf("The factorial of %d is: %d\n", number, result);

    }
    return 0;
}

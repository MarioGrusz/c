    // Print numbers from 1 to n:
    //     Take an input n from the user.
    //     Print all numbers from 1 to n using a for loop.

    // Calculate the sum of numbers from 1 to n:
    //     Take an input n from the user.
    //     Calculate and print the sum of numbers from 1 to n using a for loop.

    // Print the multiplication table of a number:
    //     Take an input number from the user.
    //     Print its multiplication table up to a certain limit (e.g., 10).

    // Check if a number is prime:
    //     Take an input number from the user.
    //     Determine if the number is prime using a for loop to check divisibility.

    // Find the factorial of a number:
    //     Take an input number from the user.
    //     Calculate and print the factorial of the number using a for loop.





#include <stdio.h>

void print();
void sum();


int main() {
    // print();
    sum();
    return 0;
}

void print() {
    int number;
    printf("\nPlease provide a number from 1 to 100: ");
    scanf("%d", &number);

    int i;
    for(i = 1; i <= number; i++) {
        printf("%d ", i);  // Added a space for better readability
    }
    printf("\n");  // Add a newline at the end
}


void sum(){

    int number;
    printf("\nPlease enter number from 1 to 100: ");
    scanf("%d", &number);

    int i;
    int numsSum;

    for(i = 1; i <= number; i++){
        numsSum += i;
    }

    printf("\nSum of entered number is %d\n", numsSum);

}

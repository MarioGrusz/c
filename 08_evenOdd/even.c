#include<stdio.h>



int main(){
    int number;
    printf("\nPlease enter any number between 0 and 20: ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("\nNumber: %d is even\n", number);
    }
    else {
        printf("\nNumber: %d is odd\n", number);
    }
    return 0;
}

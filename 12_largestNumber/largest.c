#include <stdio.h>


int main(){
    int numbers[] = {5, 10, 2, 8, 1};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    int largest = numbers[0];
    for(int i = 1; i < n; i++){
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    printf("\nThe largest number is: %d\n", largest);
    return 0;
}
#include <stdio.h>


int removeDuplicates(int* nums, int numbersSize){
    if(numbersSize == 0) return 0;

    int j = 0;

    for(int i = 0; i < numbersSize; i++){
        if(nums[i] != nums[i + 1]){
            nums[j] = nums[i];
            j++;
        }
    }

    return j;
}



int main(){

    int numbers[] = {1, 1, 2, 2, 3, 4, 4, 5}; 
    int numberSize = sizeof(numbers) / sizeof(numbers[0]);
    int newLength = removeDuplicates(numbers, numberSize);

    printf("New length is %d\n", newLength);
    printf("Array after removing duplicates: ");

    for(int i = 0; i < newLength; i++){
        printf("%d", numbers[i]);
    }
    printf("\n");

    return 0;

}




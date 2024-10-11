#include<stdio.h>

int main(){

    int data[] = {3, 8, 1, 4, 9};
    int n = sizeof(data) / sizeof(data[0]);
    int target = 4;

    int found = 0;
    for(int i = 0; i < n; i++){
        if(data[i] == target){
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
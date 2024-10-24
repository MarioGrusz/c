#include <stdio.h>
#include <string.h>

void reversedString(char* str){
    int left = 0;
    int right = strlen(str) - 1;

    while(left < right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }


}


int main(){
    char str[] = "Hello World!"

    printf("\nOriginal string: %s\n", str);
    reverseString(str);
    printf("\nReversed string: %s\n", str);

    return 0;
}


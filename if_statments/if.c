#include<stdio.h>


int main() {

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("you are now signed up!\n");
    } 
    else if( age < 0){
        printf("You haven't been born yet\n");
    }
    else {
        printf("You are too young to sing up!\n");
    }


    return 0;
}
#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;
}


//MEMORY is like a street with bunch of different houses (blocks) and each block can store
//some value. like house can store person, and the memory address is a house address

//WHEN WE DECLARE VARIABLE WE SETTING SOME AMOUNT OF MEMORY BLOCK ASIDE (char a;) TO 
//STORE SOME VALUE. THIS MEMORY BLOCK HAS ADDRESS 
// char a = 'X'
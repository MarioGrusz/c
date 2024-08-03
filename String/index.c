#include <stdio.h>
#include <ctype.h>  
#include <string.h> 



// tolower ctype.h
// toupper ctype.h

//strcat string.h (str, str)
//strncat string.h (str, str, numbers of characters to cat)

//strcpy string.h (str1, str2) str2 became str1
//strncpy string.h


//strlen return length as integer
//strcmp (str1, str2) return O if they are the same , and number otherwise
//strncmp

void toLowerCase(char *str) {
    while (*str) {          // While we haven't reached the end of the string
        *str = tolower((unsigned char) *str);  // Convert to lowercase
        str++;              // Move to the next character
    }
}


void firstLower(){

    char string1[] = "Bro\n";
    char string2[] = "Code\n";
    toLowerCase(string1);

    printf("%s", string1);

    strnc

}


void secondLower(){
    char string1[] = "Bro\n";
    char string2[] = "Code\n";

    // Convert string1 to lowercase
    char *ptr = string1;  // Pointer to iterate through the string
    while (*ptr) {        // Loop until the end of the string
        *ptr = tolower((unsigned char) *ptr);  // Convert each character to lowercase
        ptr++;            // Move to the next character
    }

    printf("%s", string1);
};


void append(){
    char string1[50] = "Hello"; 
    char string2[] = "World!";

    // Append string2 to the end of string1
    strcpy(string1, string2);

    printf("Concatenated String: %s\n", string1);
}


int main() {

    firstLower();
    secondLower();
    append();
    return 0;
}

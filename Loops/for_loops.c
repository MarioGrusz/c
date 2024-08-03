// for (initialization; condition; increment/decrement) {
//     // code to be executed
// }


#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    return 0;
}

//Multiple variables in the initialization part:

for (int i = 0, j = 5; i < 5; i++, j--) {
    printf("i = %d, j = %d\n", i, j);
}


//Empty initialization:

int i = 0;
for (; i < 5; i++) {
    printf("%d ", i);
}


//Empty condition:

for (int i = 0;; i++) {
    if (i >= 5) {
        break;
    }
    printf("%d ", i);
}

//Empty increment/decrement:

for (int i = 0; i < 5;) {
    printf("%d ", i);
    i++;
}

//Arbitrary expressions in the increment/decrement part:

for (int i = 0; i < 10; i += 2) {
    printf("%d ", i);
}


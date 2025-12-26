#include <stdio.h>
//Akanksha prasad
//RU-25-10124
int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
// Output - 

// A
// AB
// ABC
// ABCD

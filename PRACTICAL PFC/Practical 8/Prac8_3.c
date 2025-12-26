#include <stdio.h>
//Akanksha prasad
//RU-25-10124
void printTriangle(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printTriangle(n);
    return 0;
}
// Output - 

// 5
// *
// **
// ***
// ****
// *****

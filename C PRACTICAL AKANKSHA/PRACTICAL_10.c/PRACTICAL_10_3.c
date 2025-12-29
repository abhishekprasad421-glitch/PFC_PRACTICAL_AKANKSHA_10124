#include <stdio.h>

// AKANKSHA PRASAD
// ERP NO. 10124

int main() {
    int r, c, i, j;
    int arr[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
// OUTPUT
// Enter rows and columns: 3 4
// Enter elements:
// 1 3 4 6
// 4 7 8 9
// 7 9 3 2
// Sum of row 1 = 14
// Sum of row 2 = 28
// Sum of row 3 = 21
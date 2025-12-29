#include <stdio.h>


// AKANKSHA PRASAD
// ERP NO.10124 

int main() {
    int n, i, j, sum = 0;
    int arr[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if(i == j)
                sum += arr[i][j];
        }
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
// OUTPUT
// Enter size of square matrix: 4
// Enter elements:
// 1 2 3 4
// 5 6 7 8
// 2 9 7 5
// 3 0 1 4
// Sum of diagonal elements = 18
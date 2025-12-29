#include <stdio.h>

// AKANKSHA PRASAD
// ERP NO. 10124

int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
//OUTPUT
// Enter number of elements: 4
// Enter array elements:
// 8
// 7
// 6
// 5
// Reversed array:
// 5 6 7 8
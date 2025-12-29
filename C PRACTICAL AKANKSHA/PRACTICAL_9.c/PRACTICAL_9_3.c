#include <stdio.h>

// AKANKSHA PRASAD
// ERP NO. 10124

int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
//OUTPUT
// Enter number of elements: 6
// Enter array elements:
// 6
// 77
// 88
// 99
// 44
// 55
// Sum of even elements = 138
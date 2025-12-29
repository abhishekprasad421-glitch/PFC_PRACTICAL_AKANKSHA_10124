#include <stdio.h>

// AKANKSHA PRASAD
// ERP NO. 10124

int main() {
    int n, i;
    int arr[100], max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
//OUTPUT
// Enter number of elements: 5
// Enter array elements:
// 6   
// 8
// 99
// 88
// 77
// Maximum = 99
// Minimum = 6
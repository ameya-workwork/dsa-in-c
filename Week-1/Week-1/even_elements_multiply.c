#include <stdio.h>

int main() {
    int n, multiplier;
    int arr[20];

    // Read number of elements
    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read multiplication factor
    scanf("%d", &multiplier);

    // Multiply even elements by the given factor
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] * multiplier;
        }
    }

    // Print modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

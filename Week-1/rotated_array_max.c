#include <stdio.h>

int main() {
    int n;
    int arr[20];

    // Read number of elements
    scanf("%d", &n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find maximum element in rotated sorted array
    int i = 0;
    while (i < n - 1 && arr[i + 1] > arr[i]) {
        i++;
    }

    printf("%d", arr[i]);

    return 0;
}

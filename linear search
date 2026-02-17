#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // found at index i
        }
    }
    return -1; // not found
}

int main() {
    int n, key;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", result + 1);

    return 0;
}


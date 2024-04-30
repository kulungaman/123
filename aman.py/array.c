#include <stdio.h>

void minmax(int arr[], int size, int *min, int *max) {
    *min = *max = arr[0]; // Initialize min and max with the first element of the array
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i]; // Update min if current element is smaller
        }
        if (arr[i] > *max) {
            *max = arr[i]; // Update max if current element is larger
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min, max;
    minmax(arr, n, &min, &max);

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    int* freq = (int*)calloc(100000, sizeof(int)); // Assuming numbers are small, like 0 <= num < 100000

    if (arr == NULL || freq == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++; // Count frequency
    }

    printf("\nArray after removing repeated elements:\n");
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    free(arr);
    free(freq);
    return 0;
}

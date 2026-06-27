#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements in arrays: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Swapping arrays
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("\nArrays after swapping:\n");

    printf("First array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nSecond array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, j, unique;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Unique elements in the array:\n");
    for (i = 0; i < n; i++) {
        unique = 1; // Assume the element is unique initially
        for (j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                unique = 0; // If the element is found again, it's not unique
                break;
            }
        }
        if (unique) {
            printf("%d\n", a[i]); // Print the unique element
        }
    }

    return 0;
}


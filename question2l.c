#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        printf("The entered number: %d\n", a[i]);
    }

    printf("Reversed order:");

    for (i = n - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }

    return 0;
}



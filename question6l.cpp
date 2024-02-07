#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n], position, element;

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the position: ");
    scanf("%d", &position);

    printf("Enter the element: ");
    scanf("%d", &element);

    for (i = n - 1; i >= position - 1; i--) {
        a[i + 1] = a[i];
    }

    a[position - 1] = element;

    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


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

    

    return 0;
}



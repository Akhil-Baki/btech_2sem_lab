//binary search 

include <stdio.h>

int binary_search(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, i, target;
    printf("enter the size of array:");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("enter element in the array of index %d:", i);
        scanf("%d", &a[i]);
    }

    printf("enter the target:");
    scanf("%d", &target);

    int index = binary_search(a, n, target);

    if (index != -1) {
        printf("Target found at index %d\n", index);
    } else {
        printf("Target not found\n");
    }

    return 0;
}
//linear search 

#include <stdio.h>

int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Target not found
}

int main() {
    int n, i, target;
    printf("enter the size of array:");
    scanf("%d", &n);

    int a[n]; // Declare a with size n

    for (i = 0; i < n; i++) {
        printf("enter element in the array of index %d:", i);
        scanf("%d", &a[i]);
    }

    printf("enter the target:");
    scanf("%d", &target);

    int index = linear_search(a, n, target);

    if (index != -1) {
        printf("Target found at index %d\n", index);
    } else {
        printf("Target not found\n");
    }

    return 0;
}

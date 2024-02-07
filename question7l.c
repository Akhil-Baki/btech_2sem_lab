#include <stdio.h>

void deleteElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        printf("Invalid index\n");
        return;
    }
    
    // Shift elements to the left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    printf("Element at index %d deleted successfully\n", index);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 2; // Index of the element to delete
    
    deleteElement(arr, size, index);

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


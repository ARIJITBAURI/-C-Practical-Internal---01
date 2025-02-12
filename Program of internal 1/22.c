#include <stdio.h>

// Function to swap adjacent elements (odd and even indices)
void swapOddEven(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Get the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check if the array size is valid
    if (n <= 0) {
        printf("Invalid array size!\n");
        return 1; // Exit with error code
    }

    int arr[n]; // Declare array

    // Input elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Swap odd-even elements
    swapOddEven(arr, n);

    // Display the modified array
    printf("Array after swapping odd and even positions: ");
    printArray(arr, n);

    return 0;
}

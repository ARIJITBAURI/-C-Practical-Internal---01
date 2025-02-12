/*find out largest and smallest number from an 1d 
array, then sort the array in ascending and 
descending order. */

#include <stdio.h>


void findLargestSmallest(int arr[], int size, int *largest, int *smallest) {
    *largest = *smallest = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}


void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, largest, smallest;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    findLargestSmallest(arr, n, &largest, &smallest);
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    
    sortAscending(arr, n);
    printf("Array in ascending order: ");
    printArray(arr, n);

    
    sortDescending(arr, n);
    printf("Array in descending order: ");
    printArray(arr, n);

    return 0;
}

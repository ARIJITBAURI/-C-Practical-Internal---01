//To search the element present or not, if present 
//then it's frequency (how much times it is present)

#include <stdio.h>

void searchElement(int arr[], int size, int target) {
    int count = 0;

    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    
    if (count > 0) {
        printf("Element %d is present %d times in the array.\n", target, count);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }
}

int main() {
    int n, target;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the element to search: ");
    scanf("%d", &target);

   
    searchElement(arr, n, target);

    return 0;
}

#include <stdio.h>

void printPositiveElements(int arr[], int size) {
    printf("Positive elements in the array are: ");
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = { -10, 15, -20, 30, -5, 40, -25 };
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printPositiveElements(arr, size);
    
    return 0;
}

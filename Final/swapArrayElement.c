#include <stdio.h>

// Function to swap two elements in an array
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to sort the array in ascending order using Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to find the 2nd and 5th largest numbers and swap them
void swap2ndAnd5thLargest(int arr[], int n) {
    // Sort the array in ascending order
    bubbleSort(arr, n);


   printf("\nOriginal Array before swapping: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Swap the 2nd and 5th largest numbers
    int secondLargestPos = 1; // Position of 2nd largest element
    int fifthLargestPos = 4;  // Position of 5th largest element

    if (n >= 5) {
        swap(&arr[secondLargestPos], &arr[fifthLargestPos]);
    }
}

int main() {
    int arr[100], n = 5, i;
   printf("Enter number of elements in the array: ");
   printf("Enter %d elements\n", n);
   for (i = 0; i < n; i++)
   {
      printf("Enter element %d: ", i + 1);
      scanf("%d", &arr[i]);
   }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    swap2ndAnd5thLargest(arr, n);

    printf("\nArray after swapping: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>

// bubble sort algorithm
void bubbleSort(int arr[], int n)
{
   int i, j, temp;
   for ( i = 0; i < n - 1; i++)
   {
      for(j = 0; j < (n - i -1); j++ ){
         if(arr[j] > arr[j + 1]){
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
   }
}

// main function
int main()
{
   int arr[100], n, i;
   printf("Enter number of elements in the array: ");
   scanf("%d", &n);
   printf("Enter %d elements\n", n);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   bubbleSort(arr, n);
   
   printf("Array after bubble sort:\n");
   for (i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   return 0;
}
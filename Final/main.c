// #include <stdio.h>
// int main() {
//    int i, space, rows, k = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 1; i <= rows; ++i, k = 0) {
//       for (space = 1; space <= rows - i; ++space) {
//          printf("  ");
//       }
//       while (k != (2 * i - 1)) {
//          printf("* ");
//          ++k;
//       }
//       printf("\n");
//    }
//    return 0;
// }


// 5
// 44
// 333
// 2222
// 1111111

// draw a patern like this by using nested loop
#include <stdio.h>
int main() {
      int i, j, rows;
      printf("Enter the number of rows: ");
      scanf("%d", &rows);
      for (i = rows; i >= 1; --i) {
         for (j = 1; j <= i; ++j) {
               printf("%d", i);
         }
         printf("\n");
      }
      return 0;
   }


// #include <stdio.h>

// int main() {
//     int rows;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d", );
//         }
//         printf("\n");
//     }

//     return 0;
// }



void main() {

   // 1000 1001 1002 1003 1004
   int arr[] = { 1, 2, 3, 4, 5 }, *p , i;

   p = &arr[1];

   p++;

   (*p)++;

   for (i = 1; i < 5; i++)
      printf("%d ", *p);
}
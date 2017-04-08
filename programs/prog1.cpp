#include <stdio.h>
 
int main()
{
   int m, n, row, col;
   
   printf("Enter the number of rows and columns of matrix \n");
   scanf("%d%d", &m, &n);
   
   int first[m][n], second[m][n], sum[m][n];
 
   printf("Enter the elements of first matrix\n");
 
   for (row = 0; row < m; row++)
      for (col = 0; col < n; col++)
         scanf("%d", &first[row][col]);
 
   printf("Enter the elements of second matrix\n");
 
   for (row = 0; row < m; row++)
      for (col = 0 ; col < n; col++)
            scanf("%d", &second[row][col]);
 
   printf("Sum of entered matrices:- \n");
 
   for (row = 0; row < m; row++) {
      for (col = 0 ; col < n; col++) {
         sum[row][col] = first[row][col] + second[row][col];
         printf("%d\t", sum[row][col]);
      }
      printf("\n");
   }
 
   return 0;
}

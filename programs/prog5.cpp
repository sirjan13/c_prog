#include <stdio.h>
 
int main()
{
  int m,n;
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  int first[m][n];
  printf("Enter the elements of first matrix\n");
  int row,col;
  for (row = 0; row < m; row++)
    for (col = 0; col < n; col++)
      scanf("%d", &first[row][col]);
  int p,q;
  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
  	int second[p][q];
    printf("Enter the elements of second matrix\n");
    for (row = 0; row < p; row++)
      for (col = 0; col < q; col++)
        scanf("%d", &second[row][col]);
 	int  k, sum = 0,multiply[m][q];
    for (row = 0; row < m; row++) {
      for (col = 0; col < q; col++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[row][k]*second[k][col];
        }
 
        multiply[row][col] = sum;
        sum = 0;
      }
    }
    printf("Product of entered matrices:-\n");
    for (row = 0; row < m; row++) {
      for (col = 0; col < q; col++)
        printf("%d\t", multiply[row][col]);
 
      printf("\n");
    }
  }
  return 0;
}

#include <stdio.h>
void matrixmul();
int main()
{
  printf("matrix multiplictaion\n");
  matrixmul();
  }
  void matrixmul()
  {
  int r1, c1, r2, c2, i, j, k;
 
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &r1, &c1);
	printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &r2, &c2);
  int a[r1][c1], b[r2][c2], c[r1][c2];
  if (c1 != r2)
    printf("The multiplication isn't possible.\n");
  else
  {
  	 printf("Enter elements of first matrix\n");
 
  for (i = 0; i < r1; i++)
    for (j = 0; j < c1; j++)
      scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix\n");
 
    for (i = 0; i < r2; i++)
      for (j = 0; j< c2; j++)
        scanf("%d", &b[i][j]);
 
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c2; j++) {
      	 c[i][j] = 0;
        for (k = 0; k < c1; k++) {
         c[i][j] = c[i][j]+ a[i][k]*b[k][j];
        }
 
               
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c2; j++){ 
        printf("%d\t", c[i][j]);
 }
      printf("\n");
    }
  }
}

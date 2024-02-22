#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], rows, columns, i, j;
  printf("Enter rows and columns: ");
  scanf("%d%d", &i, &j);

  printf("Enter matrix elements:\n");
  {for ( rows = 0; rows < i; rows++)
  for ( columns = 0; columns < j; columns++) {
    scanf("%d", &a[rows][columns]);
  }
  }

  printf("Entered matrix: \n");
  for (rows= 0; rows < i; rows++){

  for (columns = 0; columns < j; columns++) {
    printf("%d\t", a[rows][columns]);
  }
    printf("\n");
  }

  for (rows= 0; rows < i; rows++)
  {
  for (columns = 0; columns < j; columns++) {
    transpose[columns][rows]= a[rows][columns];
  }
  }

  printf("\nTranspose of the matrix:\n");
  
  for (rows = 0; rows < j; rows++){

  for (columns = 0; columns < i; columns++) {
    printf("%d\t", transpose[rows][columns]);
  }
  printf("\n");
  }
  return 0;
}
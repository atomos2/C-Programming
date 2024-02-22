#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], rows, columns, i, j, tag=0;
  printf("Enter rows and columns: ");
  scanf("%d%d", &i, &j);

  printf("Enter matrix elements:\n");
  for ( rows = 0; rows < i; rows++)
  for ( columns = 0; columns < j; columns++) {
    scanf("%d", &a[rows][columns]);
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
  for (rows= 0; rows < i; rows++){
    for (columns = 0; columns < j; columns++){
        if(a[rows][columns]!=transpose[rows][columns])
        {
            tag++;
            break;
        }
    }

  }
  
  if (tag==0)
  {
    printf("It is a symmetric matrix\n");
  }
  else{
    printf("It is not a symmetric matrix\n");
  }

  return 0;
}
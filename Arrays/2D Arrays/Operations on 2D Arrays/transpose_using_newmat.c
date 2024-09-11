#include<stdio.h>
int main()
{
  int mat[3][3],trans[3][3];
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("Enter mat[%d][%d] = ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }
  printf("Matrix before transpose: \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("mat[%d][%d] = %d\t",i,j,mat[i][j]);
    }
    printf("\n");
  }
  printf("Performing Matrix transpose.....\n");
  for(int j=0;j<3;j++)
  {
    for(int i=0;i<3;i++)
    {
      trans[i][j]=mat[j][i];
    }
  }
  printf("Matrix after transpose: \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("trans[%d][%d] = %d\t",i,j,trans[i][j]);
    }
    printf("\n");
  }
  return 0;
}
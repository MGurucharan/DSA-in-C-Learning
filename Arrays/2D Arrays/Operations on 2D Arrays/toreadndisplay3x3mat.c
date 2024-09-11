#include<stdio.h>
int main()
{
  int mat[3][3];
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("Enter mat[%d][%d] = ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("mat[%d][%d] = %d\t",i,j,mat[i][j]);
    }
    printf("\n");
  }

}
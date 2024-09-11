#include<stdio.h>
int main()
{
  int m1,n1,m2,n2,row,col;
  printf("Enter the order of mat1: \n");
  scanf("%d %d",&m1,&n1);
  printf("Enter the order of mat2: \n");
  scanf("%d %d",&m2,&n2);
  int mat1[m1][n1],mat2[m2][n2];
  if(m1==m2 && n1==n2)
  {
    row=m1;
    col=n2;
    int sum[row][col];
    //mat1 input
    for(int i=0;i<m1;i++)
    {
      for(int j=0;j<n1;j++)
      {
        printf("Enter mat1[%d][%d] = ",i,j);
        scanf("%d",&mat1[i][j]);
      }
    }
    printf("\n");
    //mat2 input
    for(int i=0;i<m2;i++)
    {
      for(int j=0;j<n2;j++)
      {
        printf("Enter mat2[%d][%d] = ",i,j);
        scanf("%d",&mat2[i][j]);
      }
    }
    printf("Performing addition......\n");
    for(int i=0;i<m1;i++)
    {
      for(int j=0;j<n2;j++)
      {
        sum[i][j]=mat1[i][j]+mat2[i][j];
      }
    }
    printf("Sum matrix is below: \n");
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
      {
        printf("sum[%d][%d] = %d\t",i,j,sum[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("ORDER MUST BE SAME!!");
    return -1;
  }
}
#include<stdio.h>
int main()
{
  int m1,n1,m2,n2,row,col;
  printf("Enter the order of mat1: \n");
  scanf("%d %d",&m1,&n1);
  printf("Enter the order of mat2: \n");
  scanf("%d %d",&m2,&n2);
  int mat1[m1][n1],mat2[m2][n2];
  if(n1==m2)
  {
    int mul[m1][n2];
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
    printf("Performing multiplication......\n");
    for(int i=0;i<m1;i++)
    {
      for(int j=0;j<n2;j++)
      {
        int sum=0;
        for(int k=0;k<m2;k++)
        {
          sum=sum+(mat1[i][k]*mat2[k][j]);
        }
        mul[i][j]=sum;
      }
    }
    printf("multi matrix is below: \n");
    for(int i=0;i<m1;i++)
    {
      for(int j=0;j<n2;j++)
      {
        printf("multi[%d][%d] = %d ",i,j,mul[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("INVALID.");
    return -1;
  }
  return 0;
}
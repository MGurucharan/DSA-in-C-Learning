#include<stdio.h>
// void read_mat(int m,int n,int arr[m][n])
// {
//   for(int i=0;i<m;i++)
//   {
//     for(int j=0;j<n;j++)
//     {
//       printf("Enter arr[%d][%d] = ",i,j);
//       scanf("%d",&arr[i][j]);
//     }
//   }
// }
void process_mat(int m,int n, int arr[m][n])
{
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==j)
      {
        arr[i][j]=0;
      }
      else if(j>i)
      {
        arr[i][j]=1;
      }
      else
      {
        arr[i][j]=-1;
      }
    }
  }
}
void dis_mat(int m,int n,int arr[m][n])
{
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("arr[%d][%d] = %d\t",i,j,arr[i][j]);
    }
    printf("\n");
  }  
}
int main()
{
  int m,n;
  printf("Enter the order of the matrix: \n");
  scanf("%d %d",&m,&n);
  int array[m][n];
  // read_mat(m,n,array);
  process_mat(m,n,array);
  dis_mat(m,n,array);
  return 0;
}
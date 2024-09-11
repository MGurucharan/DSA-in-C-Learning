#include<stdio.h>
void display_mat(int arr[][3],int m)
{
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("arr[%d][%d] = %d\t",i,j,arr[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int array[5][3]={{99,100,98},{100,100,100},{88,88,88},{70,70,70},{86,86,86}};
  display_mat(array,5);
}
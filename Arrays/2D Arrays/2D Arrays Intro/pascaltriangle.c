#include<stdio.h>
int main()
{
  int row=2;
  int array[4][4]={0};
  array[0][0]=array[1][0]=array[1][1]=1;
  while(row<4)
  {
    array[row][0]=1;
    for(int col=1;col<=row;col++)
    {
      array[row][col]=array[row-1][col-1]+array[row-1][col];
    }
    row++;
  }
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<=i;j++)
    {
      printf("%d\t",array[i][j]);
    }
    printf("\n");
  }
  return 0;
}
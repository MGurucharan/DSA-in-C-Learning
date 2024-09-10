#include<stdio.h>
int main()
{
  
int arr[5][3]={{99,100,98},{100,100,100},{88,88,88},{70,70,70},{86,86,86}};
  // stored in row by row format
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<5;j++)
    {
      arr[i][j]=arr[j][i];
    }
  }

  // Tip: 
  /*
  If I am having the row(i) for loop first,then I would be traversing the whole each row one by one by printing arr[i][j], If I was having the column j , for loop first , I would be traversing the entire column with array[i][j], its like the second loop is varying with respect to the first loop  (fixed) , so when we have row(i) for loop first and j loop second , we are fixing i (row) and varying j(column) (ROW - MAJOR ACCESSING) and when we have column(j) for loop first , we are KINDA fixing the column (because this first loop has to wait for the inner loop to complete hence its kinda like fixed ) ,and vary the i (row) (COLUMN - MAJOR ACCESSING)*/

  // for(int j=0;j<3;j++)
  // {
  //   for(int i=0;i<5;i++)
  //   {
  //     printf("%d \t",arr[i][j]);
  //   }
  //   printf("\n");
  // }

}
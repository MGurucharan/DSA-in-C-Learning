#include<stdio.h>
int main()
{
  int array[5][3];
  printf("****ENTER DATA*****\n");
  for(int i=0;i<5;i++)
  {
    int total_sales_eachsm=0;
    printf("Enter the sales of 3 products by salesman %d\n",i+1);
    for(int j=0;j<3;j++)
    {
      scanf("%d",&array[i][j]);
      total_sales_eachsm+=array[i][j];
    }
    printf("total sales by salesmen %d: %d\n",i+1,total_sales_eachsm);
  }
  for(int i=0;i<3;i++)
  {
    int total_sales_eachitm=0;
    for(int j=0;j<5;j++)
    {
      total_sales_eachitm+=array[j][i];
    }
    printf("total sales of product %d is %d\n",i+1,total_sales_eachitm);
  }
  // for(int i=0;i<3;i++)
  // {
  //   printf("salesman : %d",i+1);
  //   for(int j=0;j<3;j++)
  //   {
  //     printf(" product %d sales = %d |",j+1,array[i][j]);
  //   }
  //   printf("\n");
  // }
  return 0;
}
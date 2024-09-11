#include<stdio.h>
int main()
{
  int array[5][3];
  for(int i=0;i<5;i++)
  {
    printf("STUDENT %d MARKS\n",i+1);
    for(int j=0;j<3;j++)
    {
      printf("Enter the marks obtained in subject %d: ",j+1);
      scanf("%d",&array[i][j]);
    } // STORED IN THIS MANNER CAUTION !!! while performing transpose!!!
  }
  for(int i=0;i<3;i++)
  {
    int highest=array[0][0];
    for(int j=0;j<5;j++)
    { 
      if(array[j][i]>highest)
      {
        highest=array[j][i];
      }
    }
    printf("Highest marks in subject %d is: %d \n",i+1,highest);
  }
}
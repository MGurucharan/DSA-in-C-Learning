#include<stdio.h>
void func(int *arr)
{
  for(int i=0;i<3;i++)
  {
    printf("%d\t",*(arr+i)*10);
  }
}
int main()
{
  int arr[2][3] = {{1, 2, 3},{4, 5, 6}};
  func(arr[1]);
}
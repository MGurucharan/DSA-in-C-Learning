#include<stdio.h>
int main()
{
    int arr1[3]={1,2,3};
    int arr2[10];
    for(int i=0;i<3;i++)
    {
        arr2[i]=arr1[i];
    }
    for(int i=0;i<3;i++)
    {
        printf("%d",arr2[i]);
    }
    printf("%d",arr2[9]);
    return 0;
}
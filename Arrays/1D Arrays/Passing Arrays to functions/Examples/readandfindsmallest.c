// Example 1

#include<stdio.h>
void read(int array[],int n) // = int * arr, int n
{
    for(int i=0;i<n;i++)
    {
        printf("Enter arr[%d]=",i);
        scanf("%d",&array[i]);
    }
}
int smallest(int array[],int n) // = int * arr, int n
{
    int small= *array;
    for(int i=0;i<n;i++)
    {
        if(array[i]<small)
        {
            small=array[i];
        }
    }
    return small;
}
int main()
{
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n];
    read(arr,n);
    int res = smallest(arr,n);
    printf("The smallest element is %d",res);
    return 0;
}
#include<stdio.h>
// void func(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }
void func( const int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(arr+i)); // same as arr[i] , ++ greater than *
    }
}
int main()
{
    int array[5]={1,2,3,4,5};
    //printf("%d",*array); // same as *ptr , where where array name = array , refers to the address of the first element of the array , i.e , &array[0] = array.
    // *(array+i) = array[i]
    func(&array[1],4);
    return 0;
}

#include<stdio.h>
void func(int*ptr)
{
    printf("%d",*ptr);
}
int main()
{
    int arr[]={1,2,3,4,5};
    func(&arr[4]);
    return 0;
}
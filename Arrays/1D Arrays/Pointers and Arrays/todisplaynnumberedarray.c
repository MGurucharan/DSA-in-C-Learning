#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int *ptr1,*ptr2;
    ptr1=arr;
    ptr2=&arr[8];
    int index=0;
    while(ptr1<=ptr2)
    {   
        printf("arr[%d]=%d\n",index,*ptr1);
        ptr1++;
        index++;
    }
    return 0;
}

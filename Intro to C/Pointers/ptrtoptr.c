#include<stdio.h>
int main()
{
    int x=10;
    int*ptr=&x;
    int**ptr1=&ptr;
    int ***ptr2=&ptr1;
    printf("The value stored at the address of x is %d",***ptr2);
    return 0;
}
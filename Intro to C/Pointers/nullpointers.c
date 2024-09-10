#include<stdio.h>
int main()
{
    int*ptr=0;
    printf("the address of the pointer variable is %d\n",&ptr);
    if(ptr==0)
    {
        printf("NULL pointer");
    }
    return 0;
}

/*
Basically a NULL pointer is pointer that doesnt point to any variable or any valid memory address. yet it has its own address tho , but yeah we cannot retrieve the value stored at the address holded by NULL pointer since it doesn't contain any address .

int *ptr =NULL
or 
int *ptr=0

*/
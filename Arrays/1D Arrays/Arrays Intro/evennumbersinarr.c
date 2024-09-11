#include<stdio.h>
int main()
{
    int array[5];
    for(int i=0;i<5;i++)
    {
        array[i]=(i+1)*2;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d \t",array[i]);
    }
    return 0;
}
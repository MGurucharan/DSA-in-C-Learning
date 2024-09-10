#include<stdio.h>
int main()
{
    int array[10];
    int n;
    for(int i=0;i<10;i++)
    {
        printf("Enter the value of element %d: ",i+1);
        scanf("%d",&n);
        array[i]=n;
    }
    printf("Now printing the values of array[10]: ");
    for(int i=0;i<10;i++)
    {
        printf("Element %d is %d: ",i+1,array[i]);
    }
    return 0;
}
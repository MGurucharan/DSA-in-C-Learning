#include<stdio.h>
void checker(int);
int main()
{
    int a;
    printf("Enter value: \n");
    scanf("%d",&a);
    checker(a);
    return 0;
}
void checker(int num)
{
    if(num%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    if (num>0) 
    {
        printf("\n%d is greater than 0",num);
    }
    if (num<0)
    {
        printf("\n%d is less than 0",num);
    }
    else if(num>0 && num<6)
    {
        printf("\n%d is 0-6",num);
    }
    printf("\nexit...");
    return 0;
}
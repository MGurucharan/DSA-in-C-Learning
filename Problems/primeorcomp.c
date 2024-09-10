#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    int prime=1;
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        printf("%d is prime",num);
    }
    else
    {
        printf("%d is comp",num);
    }
    return 0;
}
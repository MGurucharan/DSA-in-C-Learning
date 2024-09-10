#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the values of m and n\n");
    scanf("%d %d",&m,&n);
    int i=m;
    int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("The sum from %d to %d is %d",m,n,sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter m,n: ");
    scanf("%d %d",&m,&n);
    int i=m;
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i=i+1;
    }
    return 0;
}
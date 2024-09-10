#include<stdio.h>
int smallest(int,int,int);
int main()
{
    int a,b,c;
    printf("Enter the values a,b,c: \n");
    scanf("%d %d %d",&a,&b,&c);
    int res=smallest(a,b,c);
    printf("The smallest is %d",res);
}
int smallest(int x,int y,int z)
{
    if(x<y && x<z)
    {
        return x;
    }
    else if(y<z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
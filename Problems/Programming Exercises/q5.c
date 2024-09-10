#include<stdio.h>
int main()
{
    float a,b;
    int res;
    printf("Enter the two floating numbers: \n");
    scanf("%f %f",&a,&b);
    res=a+b;
    printf("%f %f %d",a,b,res);
    return 0;
}
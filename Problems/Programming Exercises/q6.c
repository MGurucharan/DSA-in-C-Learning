#include<stdio.h>
int main()
{
    float a;
    printf("Enter the value: \n");
    scanf("%f",&a);
    int b;
    b=a;
    int rem=b%10;
    printf("the rightmost : %d",rem);
    return 0;

}
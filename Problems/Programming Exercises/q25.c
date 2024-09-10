#include<stdio.h>
float area(int,int);
int main()
{
    int base,height;
    printf("Enter base,height: \n");
    scanf("%d %d",&base,&height);
    float res=area(base,height);
    printf("The area of the triangle is %.2f",res);
    return 0;
}
float area(int base,int height)
{
    float ar=(0.5)*(base)*(height);
    return ar;
}
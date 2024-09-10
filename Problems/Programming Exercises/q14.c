#include<stdio.h>
float area(int,int);
int main()
{
    int b,h;
    printf("Enter base and height: \n");
    scanf("%d %d",&b,&h);
    float ar=area(b,h);
    printf("The area is %f",ar);
    return 0;
}
float area(int base,int height)
{
    float ar=(0.5)*(base)*(height);
    return ar;

}
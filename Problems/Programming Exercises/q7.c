#include<stdio.h>
float simple(int,int,int);
int main()
{
    int p,r,t;
    printf("Enter the principal rate and time: \n");
    scanf("%d %d %d",&p,&r,&t);
    float res =simple(p,r,t);
    printf("The amount is %f",res);
    return 0;
}
float simple(int p,int r,int t)
{
    float SI;
    SI=(p*r*t)/(100);
    return SI;

}
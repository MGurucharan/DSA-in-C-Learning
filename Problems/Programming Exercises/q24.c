#include<stdio.h>
float add(float*,float*);
int main()
{
    float a,b;
    printf("Enter two floats: \n");
    scanf("%f %f",&a,&b);
    float res=add(&a,&b);
    printf("The sum is %.2f",res);
    return 0;
}
float add(float *a,float *b)
{
    float tot;
    tot=*a+*b;
    return tot;
}
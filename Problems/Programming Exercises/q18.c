#include<stdio.h>
int main()
{
    float f1,f2,f3;
    printf("Enter the three floats: \n");
    scanf("%f %f %f",&f1,&f2,&f3);
    float res=f1+f2+f3;
    printf("%.2f",res);
    return 0;
}
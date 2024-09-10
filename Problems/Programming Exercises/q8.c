#include<stdio.h>
#define HRA (0.1)*(bp)
#define TA (0.05)*(bp)
int main()
{
    float bp;
    printf("Enter the basic pay: ");
    scanf("%f",&bp);
    printf("%.2f %.2f\n",HRA,TA);
    printf("the total sal is %.2f",bp+HRA+TA);
    return 0;
}
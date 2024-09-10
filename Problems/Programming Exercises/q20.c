#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num: \n");
    scanf("%d",&num);
    int sum=0;
    for(int i=0;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("The sum is %d\n",sum);
    float avg=(float)(sum)/num;
    printf("The avg is %.2f",avg);
    return 0;
}
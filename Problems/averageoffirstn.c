#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num: \n");
    scanf("%d",&num);
    int i=1;
    int sum=0;
    do
    {
        sum=sum+i;
        i=i+1;
    } while (i<=num);
    float avg=(sum)/(num);
    printf("The sum is %d\n",sum);
    printf("The average of first %d numbers is %.2f",num,avg);
    return 0;
     
}
#include<stdio.h>
int power(int,int);
int main()
{
    while(1)
    {
        int num;
        printf("Enter the number: \n");
        scanf("%d",&num);
        if(num!=-1)
        {
        int sum=0;
        int count=0;
        int m=num;
        //printf("%d",m);
        while(num>0)
        {
            num=num/10;
            count+=1;
        }
        printf("The length of %d is %d\n",m,count);
        int n=m;
        //printf("%d",n);
        while(m>0)
        {
            int dig=m%10;
            printf("dig =%d\n",dig);
            m=m/10;
            printf("m =%d\n",m);
            sum=sum+power(dig,count); // pow function ne dokha de diya benstokes
            printf("sum is %d\n",sum);
        }
        if(sum==n)
        {
            printf("Its an armstrong number\n");
        }
        else
        {
            printf("Its not an armstrong number\n");
        }
        }
        else{
            break;
        }
    }
    return 0;
}
//thats why created my own power function.
int power(int num,int power)
{
    int temp=1;
    for(int i=1;i<=power;i++)
    {
        temp=temp*num;
    }
    return temp;
}
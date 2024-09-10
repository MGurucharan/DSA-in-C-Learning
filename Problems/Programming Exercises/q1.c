#include<stdio.h>
int main()
{
    int number;
    printf("Enter 10 integers\n");
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&number);
        if(i%3==0)
        {
            printf("%d,\n",number);
        }
        else if(i!=10 || i==10)
        {
            printf("%d,",number);
        }
    }
    return 0;
}
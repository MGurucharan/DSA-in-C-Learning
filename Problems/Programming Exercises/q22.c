#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter m,n: \n");
    scanf("%d %d",&m,&n);;
    for(int i=m;i<n;i++)
    {
        int flag=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;

}
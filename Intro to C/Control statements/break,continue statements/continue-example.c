#include<stdio.h>
int main()
{
    for(int i=0;i<=6;i++)
    {
        if(i==5) continue;
        printf("\t %d",i);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    char names[100][100];
    int price[100];
    int q[100];
    int amount[100];
    int total=0;
    int size;
    printf("Enter the size of the grocery list: \n");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter the name of item %d: \n",i+1);
        scanf("%s",&names[i]);
        printf("Enter the price: \n");
        scanf("%d",&price[i]);
        printf("Enter the quantity: \n");
        scanf("%d",&q[i]);
        amount[i]=q[i]*price[i];
        total=total+amount[i];
    }
    printf("********BILL********\nItem Quantity Price Amount\n****************\n");
    for(int i=0;i<size;i++)
    {
        printf("%s    %d     %d    %d\n****************",names[i],q[i],price[i],amount[i]);
    }
    printf("\nTotal amount to be paid is %d\n",total);
    return 0;

}
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the size of arrays 1 and 2: \n");
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2],arr3[n1+n2];
    for(int i=0;i<n1;i++)
    {
        printf("Enter arr1[%d]=",i);
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        printf("Enter arr2[%d]=",i);
        scanf("%d",&arr2[i]);
    }
    int arr1_ind=0;
    int arr2_ind=0;
    int arr3_ind=0;
    while(arr1_ind<n1 && arr2_ind<n2)
    {
        if(arr1[arr1_ind]<arr2[arr2_ind])
        {
            arr3[arr3_ind]=arr1[arr1_ind];
            arr1_ind++;
        }
        else
        {
            arr3[arr3_ind]=arr2[arr2_ind];
            arr2_ind++;
        }
        arr3_ind++;
    }
    // this loop will be executed when arr2_ind == n2 (reached its max)
    // (khatam karne tak nahi choda benstokes , jab opponent ko khatam kar dala , tab jaake , khud arr3 mein sama gya :)
    while(arr1_ind<n1)
    {
        arr3[arr3_ind]=arr1[arr1_ind];
        arr3_ind++;
        arr1_ind++;
    }
    // this loop will be executed when arr1_ind == n1 (reached its max) (khatam karne tak nahi choda benstokes , jab opponent ko khatam kar dala , tab jaake , khud arr3 mein sama gya :)
    while(arr2_ind<n2)
    {
        arr3[arr3_ind]=arr2[arr2_ind];
        arr3_ind++;
        arr2_ind++;
    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("arr3[%d]=%d\n",i,arr3[i]);
    }
    return 0;
}
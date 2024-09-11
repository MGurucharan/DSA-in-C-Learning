// deleting an element from an unsorted array (not ascending)

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter arr[%d]=",i);
        scanf("%d",&array[i]);
    }
    int pos;
    printf("Enter the position of the deleting element: \n");
    scanf("%d",&pos);
    for(int i=0;i<n;i++)
    {
        if(array[i]==array[pos])
        {
            while(i<=n-1)
            {
                array[i]=array[i+1];
                i=i+1;
            }
        }
    }
    n=n-1;
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,array[i]);
    }
    return 0;
}

//deleting an element from a sorted (ascending ordered array)

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array: \n");
//     scanf("%d",&n);
//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter arr[%d]=",i);
//         scanf("%d",&array[i]);
//     }
//     int num;
//     // printf("Enter the position of the deleting element: \n");
//     printf("Enter the number to delete from the array: \n");
//     scanf("%d",&num);
//     for(int i=0;i<n;i++)
//     {
//         if(array[i]==num)
//         {
//             while(i<=n-1)
//             {
//                 array[i]=array[i+1];
//                 i=i+1;
//             }
//         }
//     }
//     n=n-1;
//     for(int i=0;i<n;i++)
//     {
//         printf("arr[%d]=%d\n",i,array[i]);
//     }
//     return 0;
// }
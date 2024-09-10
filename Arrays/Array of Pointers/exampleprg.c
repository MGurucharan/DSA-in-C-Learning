// #include<stdio.h>
// int main()
// {
//     int *ptr[10]; 
//     int p = 1, q = 2, r = 3, s = 4, t = 5;
//     ptr[0] = &p;
//     ptr[1] = &q;
//     ptr[2] = &r;
//     ptr[3] = &s;
//     ptr[4] = &t;
//     printf("\n %d", *ptr[3]);
//     return 0;
// }

//we store the address of three 
//individual arrays in the array of pointers:

#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={0,2,4,6,8};
    int arr3[]={1,3,5,7,9};
    int *parr[3] = {arr1, arr2, arr3};
    //here, parr[0]=&arr1[0] , parr[1]=&arr2[0] , parr[2]=&arr3[0].
    for(int i = 0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d\t",*parr[i]);
            parr[i]++;
        }
        printf("\n");
    }
    return 0;
}
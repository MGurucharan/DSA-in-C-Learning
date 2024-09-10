// merging two unsorted arrays

// #include<stdio.h>
// int main()
// {
//     int n1,n2,index=0;
//     printf("Enter the size of arr1 and arr2: \n");
//     scanf("%d %d",&n1,&n2);
//     int array1[n1],array2[n2];
//     for(int i=0;i<n1;i++)
//     {
//         printf("Enter arr1[%d]",i);
//         scanf("%d",&array1[i]);
//     }
//     printf("\n");
//     for(int i=0;i<n2;i++)
//     {
//         printf("Enter arr2[%d]",i);
//         scanf("%d",&array2[i]);
//     }
//     int merg[n1+n2];
//     for(int i=0;i<n1;i++)
//     {
//         merg[index]=array1[i];
//         index++;
//     }
//     for(int i=0;i<n2;i++)
//     {
//         // merg[index]=array2[i]; // here index takes the latest value from the previous loop.
//         // index++;
//         // //or
//         // merg[n1+i]=array2[i];
//         // mer[3]=arr2[0] , arr1= {1 2 3}, arr2= {4,5,6} , merg = {1 2 3 _4}

//     }
//     for(int i=0;i<n1+n2;i++)
//     {
//         printf("merg[%d]=%d\n",i,merg[i]);
//     }
//     return 0;

// }
//Inserting an element at the particular position in the array
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array: \n");
//     scanf("%d",&n);
//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("arr[%d]=",i);
//         scanf("%d",&array[i]);
//     }
//     int i=n-1;
//     printf("The value of upper_bound is %d\n",i);
//     int pos,val;
//     printf("Enter the value and position at which you want to insert the element: \n");
//     scanf("%d %d",&val,&pos);
//     while(i>=pos)
//     {
//         array[i+1]=array[i];
//         i=i-1;
//     }
//     array[pos]=val;
//     printf("Array after inserting is \n");
//     n=n+1;
//     for(int i=0;i<n;i++)
//     {
//         printf("arr[%d]=%d\n",i,array[i]);
//     }
//     return 0;
// }

// Inserting an element in a sorted ascending order array 

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array: \n");
//     scanf("%d",&n);
//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter arr[%d] = ",i);
//         scanf("%d",&array[i]);
//     }
//     int val;
//     printf("Enter the value that you want to insert: \n");
//     scanf("%d",&val);
//     for(int i=0;i<n;i++)
//     {
//         if(array[i]>val)
//         {
//             int j=n-1;
//             while(j>=i)
//             {
//                 array[j+1]=array[j];
//                 j=j-1;
//             }
//             array[i]=val;
//             break;
//         }
//     }
//     n=n+1;
//     for(int i=0;i<n;i++)
//     {
//         printf("arr[%d]=%d\n",i,array[i]);
//     }
//     return 0;
// }

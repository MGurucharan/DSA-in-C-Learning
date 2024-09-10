// Read and display n elements of an array

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array: \n");
//     scanf("%d",&n);
//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter element %d: ",i+1);
//         scanf("%d",&array[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("Element %d : %d\n",i+1,array[i]);
//     }
//     return 0;
// }

// Mean of n numbers 

// #include <stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter the size of the array: \n");
//     scanf("%d",&n);
//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter element %d: ",i+1);
//         scanf("%d",&array[i]);
//         sum=sum+array[i];
//     }
//     printf("The sum of %d elements is %d: \n",n,sum);
//     float mean=(sum)/(n);
//     printf("The mean is: %.2f ",mean);
//     return 0;
// }


// position of smallest element in the array

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array: \n");
//     scanf("%d",&n);
//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter element %d: ",i+1);
//         scanf("%d",&array[i]);
//     }
//     int small=array[0];
//     int pos=0;
//     for(int i=0;i<n;i++)
//     {
//         if(array[i]<small)
//         {
//             small=array[i];
//             pos=i;
//         }
//     }
//     printf("The smallest element is %d at position %d,",small,pos);
//     return 0;
// }

//Second largest element of n numbered array

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array: \n");
//     scanf("%d",&n);
//     if(n<2)
//     {
//         printf("Enter atleast two elements...\n");
//         return -1;
//     }
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter element %d: ",i+1);
//         scanf("%d",&array[i]);
//     }
//     int pos_of_largest;
//     int max=array[0];
//     for(int i=0;i<n;i++)
//     {
//         if(array[i]>max)
//         {
//             max=array[i];
//             pos_of_largest=i;
//         } 
//     }
//     printf("largest element is %d , found at index %d\n",max,pos_of_largest);
//     int sec_large=array[0]==max?array[1]:array[0];
//     int pos_of_seclargest=pos_of_largest==0?1:0;
//     // dont give sec_large the index of the largest element of the array.
//     // anyways the entry for the largest element is restricted.
//     for (int i = 0; i < n; i++) {
//         if (array[i] != max){
//             if (array[i] > sec_large) {
//                 sec_large = array[i];
//                 pos_of_seclargest = i;
//             }
//         }
//     }
//     printf("Second largest element %d ,found at index %d\n", sec_large, pos_of_seclargest);
//     return 0;
// }

// n digits

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array: \n");
//     scanf("%d",&n);
//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter digit number %d\n",i+1);
//         scanf("%d",&array[i]);
//     }
//     int num=0;
//     for(int i=0;i<n;i++)
//     {
//         num=num*10 + array[i];
//     }
//     printf("The number is: %d",num);
//     return 0;
// }

// duplicate entries 

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter digit number %d\n",i+1);
        scanf("%d",&array[i]);
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                printf("dupilcate elements found at index : %d,%d\n",i,j);
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("No Duplicates were found.");
    }
    return 0;
}

// Smallest of n numbered array 

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array: \n");
//     scanf("%d",&n);
//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter digit number %d\n",i+1);
//         scanf("%d",&array[i]);
//     }
//     int small=array[0];
//     int pos=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(array[i]<small)
//         {
//             small=array[i];
//             pos=i;
//         }
//     }
//     printf("The smallest element is %d at index %d",small,pos);
//     return 0;
// }
    
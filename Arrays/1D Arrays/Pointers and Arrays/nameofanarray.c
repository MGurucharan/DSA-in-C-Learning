//Array notation is a form of pointer notation.
/*

The name of the array is the starting address of the 
array in memory. It is also known as the base address. In other words, base address is the address of 
the first element in the array or the address of arr[0]. Now let us use a pointer variable as given 
in the statement below. 
int *ptr;
ptr = &arr[0];

The name of an array is actually 
a pointer that points to the first 
element of the array.

so writing "arr" is same as int * ptr = &arr[0]; 
so arr is equal to &arr[0] in general.

*/
// #include<stdio.h>
// int main()
// {
// int arr[]={1,2,3,4,5};
// printf("\n Address of array = %p %p %p", arr, &arr[0], &arr);
// }

// #include<stdio.h>
// int main()
// {
// int arr[]={1,1,-1,0,5};
// int *ptr, i;
// ptr=&arr[2];
// *ptr = -1;
// *(ptr+1) = 0;
// *(ptr-1) = 1;
// printf("\n Array is: ");
// for(i=0;i<5;i++)
// printf(" %d", *(arr+i));
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int arr[]={1,2,3,4,5,6,7,8,9};
// int *ptr1, *ptr2;
// ptr1 = arr;
// ptr2 = arr+9;
// printf("%d", *ptr2);// gives you address value if ptr2 points to one past end of the array. 
// return 0;
// }
// /*
// Call by value : The copy of the values of the variables are passed by the calling function to the called function

// The called function creates new variables to store the value of the arguments that is passed to it. 

// */

// #include<stdio.h>
// void func(int);
// int main()
// {
//     int a=2;
//     int *address = &a;
//     printf("The address of a in the calling function is %d\n",address);
//     printf("The value of a before calling the function is %d\n",a);
//     func(a);
//     printf("The value of a after calling the function is %d",a);
//     return 0;

// }
// void func(int a)
// {
//     int *address=&a;
//     printf("The address of a in the called function is %d\n",address);
//     a=a+10;
//     printf("The value of a in the called function is %d\n",a);
// }


/*
Call by value : The copy of the values of the variables are passed by the calling function to the called function

The called function creates new variables to store the value of the arguments that is passed to it. 

*/

//explicitly returning the values to the calling function by using return keyword.
#include<stdio.h>
int func(int);
int main()
{
    int a=2,x;
    int *address = &a;
    printf("The address of a in the calling function is %d\n",address);
    printf("The value of a before calling the function is %d\n",a);
    x=func(a);
    printf("The value of a after calling the function is %d",x);
    return 0;

}
int func(int a)
{
    int *address=&a;
    printf("The address of a in the called function is %d\n",address);
    a=a+10;
    printf("The value of a in the called function is %d\n",a);
    return a;
}
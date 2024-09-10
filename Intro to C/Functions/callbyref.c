/*
In call by ref method , the called function receives an implicit reference (address) to the argument rather than a copy of its value (call by value method)

Therefore the changes made to the arguments in the called function are also reflected in the calling function as well.

*/

#include<stdio.h>
void add(int *);
int main()
{
    int num=2;
    printf("The value of num before calling the function is %d",num);
    add(&num);
    printf("\nThe value of num after calling the function is %d",num);
    return 0;
}
void add(int *x)
{
    *x=*x+10;
    printf("\nThe value of num in the called function is %d",*x);

}
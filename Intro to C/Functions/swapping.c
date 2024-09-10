// by using both call by ref and call by value

#include<stdio.h>
void call_by_value(int,int);
void call_by_ref(int*,int*);
int main()
{
    int a=10 , b=12;
    printf("values of a and b before swapping (by value) is a=%d b=%d\n",a,b);
    call_by_value(a,b);
    printf("values of a and b after swapping (by value) is a=%d b=%d\n",a,b);
    printf("values of a and b before swapping (by ref) is a=%d b=%d\n",a,b);
    call_by_ref(&a,&b);
    printf("values of a and b after swapping(by ref) is a=%d b=%d\n",a,b);
    return 0;
}
void call_by_value(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The values of a and b in the called function (by value) is %d %d\n",a,b);
}
void call_by_ref(int*a, int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("The values of a and b in the called function (by ref) is %d %d\n",*a,*b);
}

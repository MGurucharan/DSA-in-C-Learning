/*
Are the pointers that can point to variables of any data type.
void *ptr;

In C, since you cannot have a variable of type void, the void pointer will therefore not point to 
any data and, thus, cannot be dereferenced. You need to cast a void pointer to another kind of pointer before using it.

So the main diff between NULL and void or generic pointers are that the NULL pointers dont actually have any address of the variable like it is NULL ,or 0. So you cannot deref* it , so you would get nothin and also ptr=0 (value of ptr is 0) (but ptr being a variable will still occupy some memory in the computer and will have a memory location that is associated with itself. But Void pointers are like the ones that can be used as many datatype pointers like int pointers, float pointers, char pointers etc...but to do that you have to cast it into the datatype that you want it to act like , by using casters like (int*)ptr , (char*)ptr etc.....) , void ptr can be used to store the address of the different datatype variables that we want it to store.  like ptr=&x , so ptr can hold the address of that variable , but these VOID pointers cannot be dereferenced before casting , since it doesnt know what is the datatype that it has to point to. Only after casting it can be deref*.
*/

// #include<stdio.h>
// int main()
// {
//     void*ptr;
//     int x =10;
//     printf("th address of x is %d",&x);
//     ptr=&x;
//     printf("the address holded by ptr is %d",ptr);
//     return 0;

// }
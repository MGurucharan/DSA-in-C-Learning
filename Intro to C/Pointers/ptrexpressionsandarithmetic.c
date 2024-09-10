// #include<stdio.h>
// int main()
// {
//     int num1 = 2, num2 = 3, sum = 0, mul = 0; 
//     double div = 1.0;
//     int *ptr1, *ptr2;
//     ptr1 = &num1;
//     ptr2 = &num2;
//     sum = *ptr1 + *ptr2;
//     mul = sum * (*ptr1);
//     *ptr2 += 1;
//     printf("%d %d %d %d\n",*ptr1,*ptr2,sum,mul);
//     div = 9 + (*ptr1)/(*ptr2) - 30;
//     // printf("the address of the var num1 is %d\n",ptr1);
//     // ptr1++;
//     // printf("the address of the var num1_up is %d\n",ptr1);
//     // printf("%d",*ptr1);
//     // ptr1++;
//     printf("%d\n",*(ptr2)++);
//     printf("%d\n",*ptr2);
//     //printf("\n%lf",div);
// }

// #include<stdio.h>
// int main()
// {
//     int x=10;
//     int *ptr=&x;
//     printf("%d",*(ptr++)); // *(ptr++) same as *ptr
//     printf("%d",*ptr); // garbage value 
// }
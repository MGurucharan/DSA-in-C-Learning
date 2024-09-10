// scanf syntax = scanf ("control string",arg1,arg2,arg3,...argn)
// control string = %[*][width][modifier]type
/*
    *- suppresses the assignment , doesnt store the value at the memory location

    width - specifies the maximum number of characters to be read from the keyboard. (terminates if it encounters space,newline,etc..)

    modifier - l for (s,uns) short int , h for (s,uns) long int ,double values , L for long double 

    type - certain type specifiers like %c , %f,%d ,%u etc...
*/

//Tweaking modifier


// #include<stdio.h>
// int main()
// {
//     long double a;
//     printf("Enter the number: \n");
//     scanf("%Lf",&a);
//     printf("The entered number is: %Lf",a);
//     return 0;
// }


//Tweaking width

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: \n");
//     scanf("%1d",&a);
//     printf("The entered number is %d",a);
// }

//Understanding *

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number a: \n");
//     scanf("%*d",&a);
//     printf("The number a is : %d",a); //Garbage value 
//     return 0;

// }



//printf() syntax = printf("control string",arg1,arg2,arg3....,argn);
/*
control string syntax = %[flags][width][.precision][modifier]type

flags = output justification with numerical sign, trailing zeroes, blank spaces , octa or hexa gonal prefixes etc.....

- = Left justify within given field width
+ = numerical sign aa jayega (+ or -)
# = octa or hexagonal prefixes for additional specifiers o,ox,etc 
0 = adds trailing zeroes within the field width

Width = min number of positions the o/p chars will occupy. if o/p chars > field width , then all the chars will be displayed else they will be right justified with blank spaces to its left .

precision = upto 2 decimals , upto to 2 characters fot a string.

modifier = same as that for scanf()

type = same as that for scanf()

*/

// #include<stdio.h>
// int main()
// {
//     double a = 8900.768000;
//     int b=1000;
//     printf("%-15lf",a); // left justifes a within field width
//     printf("%+lf\n",a); // numerical sign
//     printf("%#x\n",b); // o/p= 0x3e8
//     printf("%010d",b); // o/p = 0000001000

// }

// Tweaking width 

// #include<stdio.h>
// int main()
// {
//     int a=1032;
//     printf("%5d",a); // right justifes a with blank spaces to its left.
//     printf("%3d",a); // prints all the chars since o/p chars > field width.
//     return 0;
// }

// Tweaking precision

// #include<stdio.h>
// int main()
// {
//     // double a= 8600.768;
//     // printf("%.2lf",a); // o/p =8600.77
//     float a = -8.4;
//     int b = 4;
//     printf("%f",a/b);
//     return 0; 
// }


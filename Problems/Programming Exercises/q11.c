#include<stdio.h>

int main() {
    int a;
    printf("Enter an integer a: \n");
    scanf("%d", &a);
    printf("The value in decimal: %d, octal: %o, hexadecimal: %0#5x\n", a, a, a);
    return 0;
}

#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    if(c>='0' && c<='9')
    {
        printf("Its a number\n");
        printf("ASCII value: %d",c);
    }
    else if(c>='a' && c<='z')
    {
        printf("lowercase\n");
        printf("ASCII value: %d",c);       
    }
    else if(c>='A' && c<='Z')
    {
        printf("uppercase\n");
        printf("ASCII value: %d",c);
    }
    else
    {
        printf("Not a letter character\n");
    }
    return 0;
}

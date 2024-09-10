#include<stdio.h>
#include<string.h>
int main()
{
    char array[50];
    printf("Enter the text: \n");
    gets(array);
    printf("The text entered is %s\n",array);
    int len=strlen(array);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(array[i]=='a'||array[i]=='e' || array[i]=='i'||array[i]=='o'||array[i]=='u'||array[i]=='A'||array[i]=='E'||array[i]=='I'||array[i]=='O'||array[i]=='U')
        {
            count+=1;
        }
    }
    printf("the count of vowels is %d",count);
    return 0;

}
#include<stdio.h>
#include<string.h>
int main()
{
    char array[50];
    printf("Enter the text: \n");
    fgets(array,sizeof(array),stdin);
    array[strcspn(array,"\n")]='\0';
    int len=strlen(array);
    char*ptr=array;
    for(int i=0;i<len;i++)
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}

// #include <stdio.h>

// int main() {
//     // Directly assign the string to the array
//     char array[] = "Programming in C is Fun";
    
//     // Pointer to the start of the string
//     char *ptr = array;
    
//     // Print each character using the pointer
//     while (*ptr != '\0') {
//         printf("%c", *ptr);
//         ptr++;
//     }
    
//     // Print a newline character at the end for better readability
//     printf("\n");
    
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char array[50];
    
//     // Prompt the user for input
//     printf("Enter the text: \n");
    
//     // Read the input, including spaces, but not exceeding 49 characters
//     fgets(array, sizeof(array), stdin);
    
//     // Remove the newline character, if present
//     array[strcspn(array, "\n")] = '\0';
    
//     // Get the length of the string
//     int len = strlen(array);
    
//     // Pointer to the start of the string
//     char *ptr = array;
    
//     // Print each character using the pointer
//     for (int i = 0; i < len; i++) {
//         printf("%c", *ptr);
//         ptr++;
//     }
    
//     // Print a newline character at the end for better readability
//     printf("\n");
    
//     return 0;
// }

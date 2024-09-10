#include <stdio.h>

int main() {
    char res[]="";// res set to undefined size 

    while (1) {
        char c; // Variable to hold the character input
        
        printf("Enter a character: \n");
        scanf(" %c", &c); // Read a single character, skipping any leading whitespace
        
        int ASCII = (int)c;
        printf("ASCII: %d\n", ASCII);
        
        // Determine if the character is lowercase or uppercase and convert accordingly
        if (c >= 'a' && c <= 'z') { // Lowercase 'a' to 'z'
            char upper_case = c - 32; // Convert to uppercase
            printf("Uppercase character is: %c\n", upper_case);
        } else if (c >= 'A' && c <= 'Z') { // Uppercase 'A' to 'Z'
            char lower_case = c + 32; // Convert to lowercase
            printf("Lowercase character is: %c\n", lower_case);
        } else {
            printf("The character is not a letter.\n");
        }
        
        // Prompt for exit response
        printf("Enter the response (enter '*' to exit): \n");
        scanf("%s", res); // Read the response
    
        if (res[0] == '*') {
            break; // Exit the loop if the response is '*'
        }
    }
    
    return 0;
}

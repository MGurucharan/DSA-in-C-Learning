#include<stdio.h>
#include<math.h>

int main()
{
    while(1)
    {
        int num;
        printf("Enter the number (or enter 0 to exit): \n");
        scanf("%d", &num);
        
        if(num == 0) 
            break;  // Exit the loop if the user enters 0
        
        int sum = 0;
        int count = 0;
        int m = num;
        
        // Calculate the number of digits in the number
        while (m > 0)
        {
            m = m / 10;
            count += 1;
        }
        
        printf("The length of %d is %d\n", num, count);
        
        m = num;  // Reset m to the original number
        
        // Calculate the sum of digits raised to the power of the number of digits
        while (m > 0)
        {
            int dig = m % 10;
            sum += pow(dig, count);
            m = m / 10;
        }
        
        // Check if the sum is equal to the original number
        if (sum == num)
        {
            printf("%d is an Armstrong number\n", num);
        }
        else
        {
            printf("%d is not an Armstrong number\n", num);
        }
    }
    
    return 0;
}

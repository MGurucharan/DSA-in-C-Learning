    #include<stdio.h>
    #include<string.h>
    int main()
    {
        char address[200];
        printf("Enter your address: \n");
        fgets(address, sizeof(address), stdin);
        printf("hello");
        address[strcspn(address, "\n")] = '\0'; 
        printf("Address entered is: \n");
        puts(address);
        address[strcspn(address, "\n")] = '\0';
        // printf("Address entered is: \n");
        // puts(address);
        int len=strlen(address);
        for(int i=0;i<len;i++)
        {
            if(address[i]==',')
            {
                printf("\n");
            }
            else
            {
                printf("%c",address[i]);
            }
        }
        return 0;
    }
#include<stdio.h>
void read(int *arr,int n) // = int * arr, int n
{
    for(int i=0;i<n;i++)
    {
        printf("Enter arr[%d] = ",i);
        //scanf("%d",(arr+i)); // this is already like
        //(&array[0]+i).
        scanf("%d",&(*(arr+i))); // same as scanf("%d",(arr+i)).
        //printf("Entered arr[%d]=%d\n",i,*(arr+i)); (Just for checking)
    }
}
// void read(int array[],int n) // = int * arr, int n
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter arr[%d] = ",i);
//         scanf("%d",&array[i]); // same as scanf("%d",&(*(arr+i))) == scanf("%d",(arr+i)).
//         printf("Entered arr[%d]=%d\n",i,array[i]); // same as *(arr+i).
//     }
// }
void display(int array[],int n) // = int * arr, int n
{
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,array[i]);
    }
}
int largest_pos(int array[],int n) // int * arr, int n , where int * arr = &array[0]
{
    int largest=*array,pos_lar=0; // largest = *arr = *(&array[0]) 
    for(int i=0;i<n;i++)
    {
        if(array[i]>largest) // same as if(*(arr+i)>largest)
        {
            largest=array[i];
            pos_lar=i;
        }
    }
    return pos_lar;
}
int small(int array[],int n)
{
    int smallest=*array,pos_smal=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]<smallest)
        {
            smallest=array[i];
            pos_smal=i;
        }
    }
    return pos_smal;
}
int*interchange(int array[], int n) //= same as (int * arr,int n)
{
    int pos_lar,pos_smal,temp;
    pos_lar=largest_pos(array,n);
    pos_smal=small(array,n);
    temp=array[pos_lar];
    array[pos_lar]=array[pos_smal];
    array[pos_smal]=temp;
    return array; //returns a pointer to the int*ptr = &array[0]
}
int main()
{
    int n,updated_array;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int array[n];
    read(array,n); // read(&array[0],n) passing to read function.
    int*ptr=interchange(array,n); 
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("updated_arr[%d]=%d\n",i,*(ptr+i));
    }
    printf("\n");
    return 0;
}

// Suppose you want to return an array (not directly) , but for that , first you gotta declare an pointer returning type fucntion
// as seen in the above case , where the interchange function is of return type , int *,int*interchange(int array[], int n), and to capture that , we must use a 
// pointer type variable of the same data type as that of the returning array's 1st element (in general all elements),int*ptr=interchange(array,n); 

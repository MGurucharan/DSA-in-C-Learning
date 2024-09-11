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
void interchange(int array[], int n) //= same as (int * arr,int n)
{
    int pos_lar,pos_smal,temp;
    pos_lar=largest_pos(array,n);
    pos_smal=small(array,n);
    temp=array[pos_lar];
    array[pos_lar]=array[pos_smal];
    array[pos_smal]=temp;
}
int main()
{
    int n,updated_array;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int array[n];
    read(array,n); // read(&array[0],n) passing to read function.
    interchange(array,n);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("updated_arr[%d]=%d\n",i,array[i]);
    }
    printf("\n");
    return 0;
}
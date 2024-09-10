#include<stdio.h>
#include<stdlib.h>
struct myArr
{
    int total_size;
    int used_size;
    int*ptr;
};
void create_arr(struct myArr*a,int tsize, int usize)
{
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}

void show(struct myArr*a)
{
    //(*a).ptr=(*a).ptr-(*a).used_size;
    int *temp_ptr=(*a).ptr;
    for(int i=0;i<(*a).used_size;i++)
    {
        printf("%d\n",*(temp_ptr+i));
        //(*a).ptr++;

    }
}
void set(struct myArr*a)
{
    int n;
    int *temp_ptr2=(*a).ptr;
    for(int i=0;i<(*a).used_size;i++)
    {
        printf("Enter element %d\n",i);
        scanf("%d",&n);
        *(temp_ptr2+i)=n;   // C compiler also interprets temp_ptr[i] as *(temp_ptr+i) This is because array indexing is fundamentally based on pointer arithmetic in C.
        // *(*a).ptr=n;
        // (*a).ptr++;
    }
}
int main()
{
    struct myArr marks;
    create_arr(&marks,100,2);
    set(&marks);
    show(&marks);
}
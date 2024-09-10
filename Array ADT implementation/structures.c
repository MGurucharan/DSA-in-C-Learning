#include<stdio.h>
struct student{
    int roll;
    char name[20];
    float marks;
};

void main()
{
    struct student s1={1001,"gurucharan"};
    struct student * ptr=&s1;
    
}
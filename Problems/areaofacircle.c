#include<stdio.h>
#include<math.h>

int main()
{
    float radius;
    float area;
    printf("Enter the radius of the circle: \n");
    scanf("%f",&radius);
    area=(M_PI)* pow(radius,2.0);
    printf("the area of the circle is %.2f",area);
    return 0;

}
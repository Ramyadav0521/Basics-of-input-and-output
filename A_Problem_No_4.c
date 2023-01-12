/*
4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format.
*/
#include<stdio.h>
int main()
{
    float radius,area=0;
    printf("\nEnter the value radius: ");
    scanf("%f",&radius);
    area = 3.14159265359*radius*radius;

    printf("\n Area of the circle is %f",area);
    printf("\n");
    return 0;
}
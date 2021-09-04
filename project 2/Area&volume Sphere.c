#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float const PI = 3.1416;
    float r,Area,Volume;
    printf("Enter the value r: ");
    scanf("%f",&r);
    Area =  4*PI*r*r;
    Volume =(4*PI*r*r*r)/3;
    printf("Area of Sphere is = %.3f",Area);
    printf("\nVolume of Sphere is = %.3f",Volume);
    getch();

}

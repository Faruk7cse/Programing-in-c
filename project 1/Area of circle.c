#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float const PI =3.1416;
    float r,Area,Circumference;
    printf("Enter the Value of r:");
    scanf("%f",&r);
    Area = PI*r*r;
    Circumference=2*PI*r;

    printf("Area of Circle is : %.2f cm",Area);
    printf("\nCircumference of Circle is : %.2f cm",Circumference);

    getch();

}

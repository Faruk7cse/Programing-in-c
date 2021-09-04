#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float celsius,fahrenheit,kelvin;
    float const kel = 273.15;
    printf("\nEnter Temp in Celsius : ");
    scanf("%f",&celsius);
    fahrenheit =(1.8*celsius)+32;
    kelvin = kel+celsius;
    printf("\nTemperture in Fahrenheit : %.3f",fahrenheit);
    printf("\nTemperture in kelvin : %.3f",kelvin);

    getch();
}

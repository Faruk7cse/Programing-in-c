#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int base,power,Result;
    printf("Enter the value base and power :");
    scanf("%d %d",&base,&power);
    Result = pow(base,power);
    printf("Power Value is : %d",Result);
    getch();
}

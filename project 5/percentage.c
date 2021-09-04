#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int s1,s2,s3,s4,s5,s6,sum,total=600;
    float percentage;
    printf("Enter Marks of 6 subjects : ");
    scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
    sum = s1+s2+s3+s4+s5+s6;
    percentage = (sum*100)/total;
    printf("\nPercentage :%.f",percentage);
    getch();
}

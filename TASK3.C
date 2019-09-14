#include<conio.h>
#include<stdio.h>
void main()
{
float s1,s2,s3,sum,avg;
clrscr();
printf("\n enter marks of physics, chemistry and mathematics respectively");
scanf("%f %f %f",&s1,&s2,&s3);
sum=s1+s2+s3;
avg=sum/3;
printf("\n the sum is %f \n the average is %f",sum,avg);
getch();
}

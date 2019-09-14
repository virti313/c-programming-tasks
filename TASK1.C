#include<stdio.h>
#include<conio.h>
void main()
{

 double age=0,phno=0;
 char name[20];
 clrscr();

 printf("enter name");
 scanf("%s",&name);
 printf("enter age and phone number:");
 scanf("%lf %lf",&age,&phno);
 printf("name: %s \n age: %lf \n phone number: %lf",name,age,phno);
 getch();
 }

#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3;
clrscr();
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2)
{
if(num1>num3)
{
printf("num1 is greatest");
}
else
{
printf("num3 is greatest");
}
}
else if(num2>num3)
{
printf("num2 is greatest");
}
else
{
printf("num3 is greatest");
}
getch();
}

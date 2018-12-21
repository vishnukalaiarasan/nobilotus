#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrscr();
printf("Enter the number to check");
scanf("%d",&number);
if(number<0)
{
printf("\nNegative");
}
else if(number>0)
{
printf("\nPositive number");
}
else
{
printf("\nZero");
}
getch();
}

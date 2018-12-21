#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrscr();
printf("Enter the number to check");
scanf("%d",&number);
if(number%2==0)
{
printf("Even number");
}
else if(number%2==1)
{
printf("odd number");
}
else
{
printf("invalid");
}
getch();
}

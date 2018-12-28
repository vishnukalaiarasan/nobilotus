#include<stdio.h>
#include<conio.h>
void main()
{
int number,i,fact=1;
clrscr();
scanf("%d",&number);
for(i=1;i<=number;i++)
{
fact=fact*i;
}
printf("%d",fact);
getch();
}

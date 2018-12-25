#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0;
clrscr();
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("%d",count);
getch();
}

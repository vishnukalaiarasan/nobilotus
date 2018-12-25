#include<stdio.h>
#include<conio.h>
void main()
{
int num,pow,i,sum=1;
clrscr();
scanf("%d%d",&num,&pow);
for(i=0;i<pow;i++)
{
sum=sum*num;
}
printf("%d",sum);
getch();
}

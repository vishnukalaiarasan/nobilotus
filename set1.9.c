#include<stdio.h>
#include<conio.h>
void main()
{
int n,num[10],i,k;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
scanf("%d",&k);
printf("%d",num[k]);
getch();
}

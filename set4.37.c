#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,c,n,x;
clrscr();
printf("no of element");
scanf("%d",&n);
printf("\narray elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
c=a[0];
for(i=0;i<n;i++)
{
if(a[i]>c)
{
c=a[i];
}
}
printf("\n%d is highest",c);
getch();
}

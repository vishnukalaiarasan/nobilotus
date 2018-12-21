#include<stdio.h>
#include<conio.h>
void main()
{
char variable;
clrscr();
scanf("%c",&variable);
if((variable>='A'&&variable<='Z')||(variable>='a'&&variable<='z'))
{
printf(" Alphabet");
}
else
{
printf("No");
}
getch();
}

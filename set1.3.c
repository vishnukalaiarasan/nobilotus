#include<stdio.h>
#include<conio.h>
void main()
{
char alphabet;
clrscr();
scanf("%c",&alphabet);
if((alphabet>='A'&&alphabet<='Z')||(alphabet>='a'&&alphabet<='z'))
{
if(alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U'||alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
{
printf("vowel");
}
else
{
printf("consonant");
}
}
else
{
printf("in valid");
}
getch();
}

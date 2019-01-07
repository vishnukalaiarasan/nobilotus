#include <stdio.h>

int main()
{
   char a[10];
   int i,flag=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       if(((a[i]>='A')&&(a[i]<='Z'))||((a[i]>='a')&&(a[i]<='z')))
       {
           flag=1;
       }
       
   }
   if(flag!=1)
   {
       printf("yes");
   }
   else
   {
       printf("Not");
   }

    return 0;
}

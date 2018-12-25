#include <stdio.h>

int main()
{
    int a,b,i,j,count=0,flag=0;
    scanf("%d%d",&a,&b);
    for(j=a;j<=b;j++)
    {
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("\n%d",j);
            count++;
        }
        flag=0;
        
    }
    printf("\n %d to %d prime number %d",a,b,count);
    return 0;
}

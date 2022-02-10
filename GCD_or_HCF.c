#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int hcf,i,max,min;
    if (a>b)
        max=a;
    else
        max=b;
    hcf=1;
    for (i=1; i<=max; i++)
    {
       if (a%i==0 && b%i==0)
       {
           if (i>hcf)
           {
               hcf=i;
           }
       }
    }
    printf("%d",hcf);
    return 0;
}
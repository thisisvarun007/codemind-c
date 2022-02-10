#include<stdio.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    if (a>=1 && a<=10000)
    for (i=1; i<a; i++)
    {
        if (a%i==0)
        {
            sum+=i;
        }
    }
    if (sum==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
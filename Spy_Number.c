#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0,pro=1,r;
    while (a>0)
    {
        r=a%10;
        sum+=r;
        pro*=r;
        a/=10;
    }
    if (pro==sum)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}
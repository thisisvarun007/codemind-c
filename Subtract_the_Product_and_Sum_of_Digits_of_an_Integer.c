#include<stdio.h>
int main()
{
    int a,b,i,sum=0,pro=1,diff;
    scanf("%d",&a);
    for (i=1; a>=1; i++)
    {
        b=a%10;
        sum+=b;
        if (b==0)
        {
            continue;
        }
        else
        {
            pro*=b;
        }
        a=a/10;
    }
    diff=pro-sum;
    printf("%d",diff);
    return 0;
}
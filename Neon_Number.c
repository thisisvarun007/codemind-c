#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0,square;
    square=a*a;
    int b,temp;
    temp=square;
    while(temp>0)
    {
        b=temp%10;
        sum+=b;
        temp=temp/10;
    }
    if (sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}
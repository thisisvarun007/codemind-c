#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b,temp,sum=0;
    temp=a;
    while (temp>0)
    {
        b=temp%10;
        sum+=b;
        temp=temp/10;
    }
    if (a%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
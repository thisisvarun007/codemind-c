#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0,pro=1,temp,b;
    if (a>=1 && a<=10000)
    {
        temp=a;
        while (temp>0)
        {
            b=temp%10;
            sum+=b;
            pro*=b;
            temp=temp/10;
        }
        if (sum==pro)
        {
            printf("Spy Number");
        }
        else
        {
            printf("Not Spy Number");
        }
    }
    return 0;
}
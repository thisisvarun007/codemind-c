#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double area,s,d;
    if (a,b,c>=1 && a,b,c<=1000)
    {
        s=(a+b+c)*0.5;
        d=s*(s-a)*(s-b)*(s-c);
        area=sqrt(d);
        printf("%.2lf",area);
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,m;
    scanf("%d%d%d",&a,&b,&m);
    int res,pro;
    if (a>=1&&a<=20 && b>=1&&a<=100&&m>=2&&m<=100)
    {
        pro=pow(a,b);
        res=pro%m;
        printf("%d",res);
        return 0;
    }
}
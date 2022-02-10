#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=0,i;
    if (a,b>=1 && a,b<=10000)
    {
        for (a;a<=b;a++)
        {
            c=0;
            for (i=2; i<=a; i++)
            {
                if (a%i==0)
                {
                    c++;
                }
            }
            if (c==1)
            {
                printf("%d
",a);
            }
        }
    }
    return 0;
}
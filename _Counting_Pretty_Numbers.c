#include<stdio.h>
int main()
{
    int a,m,n,i,j,c=0,rem;
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {
        scanf("%d",&m);
        scanf("%d",&n);
        c=0;
        for (j=m; j<=n; j++)
        {
            if (j<10 && j>=1)
            {
                rem=j;
                if (rem==2 || rem==3 || rem==9)
                {
                    c+=1;
                }
            }
            else
            {
                rem=j%10;
                if (rem==2 || rem==3 || rem==9)
                {
                    c+=1;
                }
            }
        }
        printf("%d
",c);
    }
    return 0;
}
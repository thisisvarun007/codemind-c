#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    int i,j,pro;
    for (i=1; i<=r; i++)
    {
        for (j=1; j<=r; j++)
        {
            pro=n*j;
            if (j%2!=0)
            {
                printf("%d x %d = %d
",n,j,pro);
            }
        }
        break;
    }
    return 0;
}
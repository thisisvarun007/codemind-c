#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for (k=0; k<t; k++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int arr[a],i,j;
        for (i=0; i<a; i++)
        {
            scanf("%d",&arr[i]);
        }
        int i1=0,i2=0;
        int sum=0,f=0;
        for (i=0; i<a; i++)
        {
            sum=0;
            for (j=i; j<a; j++)
            {
                sum+=arr[j];
                if (sum==b)
                {
                    i1=i;
                    i2=j;
                    f=1;
                    break;
                }
            }
            if (f==1)
            {
                break;
            }
        }
        if (f==1)
        {
            printf("%d %d
",i1+1,i2+1);
        }
        else
        {
            printf("-1
");
        }
    }
    return 0;
}
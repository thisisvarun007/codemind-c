#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i;
    for (i=1; i<=a; i++)
    {
        int n;
        scanf("%d",&n);
        int j,k,l,arr[n];
        int c=0;
        for (j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        for (j=0; j<n; j++)
        {
            for (k=0; k<n; k++)
            {
                for (l=0; l<n; l++)
                {
                    if (j!=k && k!=l && j>k && k>l)
                    {
                        if (arr[j]+arr[k]==arr[l])
                        {
                            c++;
                        }
                        if (arr[k]+arr[l]==arr[j])
                        {
                            c++;
                        }
                        if (arr[j]+arr[l]==arr[k])
                        {
                            c++;
                        }
                    }
                }
            }
        }
        if (c>0)
        {
            printf("%d
",c);
        }
        else
        {
            printf("%d
",-1);
        }
    }
    return 0;
}
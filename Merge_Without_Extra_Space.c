#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int k=0; k<t; k++)
    {
        int m,n;
        scanf("%d%d",&m,&n);
        int arr[m+n],i,j;
        for (i=0; i<m+n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for (i=0; i<m+n; i++)
        {
            for (j=1; j<m+n; j++)
            {
                if (arr[j-1]>arr[j])
                {
                    int temp=arr[j-1];
                    arr[j-1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for (i=0; i<m+n; i++)
        {
            if (i<m+n-1)
            {
                printf("%d ",arr[i]);
            }
            else
            {
                printf("%d",arr[i]);
            }
        }
        printf("
");
    }
    return 0;
}
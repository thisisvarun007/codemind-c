#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,max=0,sum=0;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (j=0; j<a; j++)
    {
        if (arr[j]==1)
        {
            sum=0;
            for (i=j; i<a; i++)
            {
                if (arr[i]==1)
                {
                    sum++;
                }
                if (arr[i]==0)
                {
                    break;
                }
            }
            if (sum>max)
            {
                max=sum;
            }
        }
    }
    printf("%d",max);
    return 0;
}
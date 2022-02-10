#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,sum=0;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        for (j=1; j<=arr[i]; j++)
        {
            if (j*j==arr[i])
            {
                sum+=arr[i];
            }
        }
    }
    printf("%d",sum);
    return 0;
}
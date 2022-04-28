#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,sum=0,j;
    for (i=0; i<a; i++)
    {
        sum=0;
        for (j=i; j<a; j++)
        {
            sum+=arr[j];
            if (sum==b)
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}
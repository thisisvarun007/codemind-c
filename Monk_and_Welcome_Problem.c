#include<stdio.h>
int main()
{
    long long int a,i;
    scanf("%lld",&a);
    long long int arr[a],brr[a];
    for (i=0; i<a; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        scanf("%lld",&brr[i]);
    }
    for (i=0; i<a; i++)
    {
        printf("%d ",arr[i]+brr[i]);
    }
    return 0;
}
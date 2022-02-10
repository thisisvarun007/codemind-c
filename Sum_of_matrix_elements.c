#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int pro,i,sum=0;
    pro=a*b;
    int arr[pro];
    for (i=0; i<pro; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<pro; i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
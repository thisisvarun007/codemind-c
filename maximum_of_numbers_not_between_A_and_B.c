#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int max=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]<x || arr[i]>y)
        {
            if (arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
    if (max==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
    return 0;
}
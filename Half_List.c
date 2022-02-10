#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int mid=a/2;
    int i,arr[a];
    for( i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=a-1; i>=mid; i--)
    {
        printf("%d ",arr[i]);
    }
    for (i=0; i<mid; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
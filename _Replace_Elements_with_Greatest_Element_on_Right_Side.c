#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a-1; i++)
    {
        int max=0;
        for (j=i+1; j<a; j++)
        {
            if (arr[j]>max)
            {
                max=arr[j];
            }
        }
        printf("%d ",max);
    }
    printf("-1");
    return 0;
}
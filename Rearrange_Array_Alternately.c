#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int k=0; k<t; k++)
    {
        int a;
        scanf("%d",&a);
        int arr[a],i,j;
        for (i=0; i<a; i++)
        {
            scanf("%d",&arr[i]);
        }
        for (j=0; j<a; j++)
        {
            for (i=1; i<a; i++)
            {
                if (arr[i]<arr[i-1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i-1];
                    arr[i-1]=arr[i];
                }
            }
        }
        int mid=a/2;
        if (a%2==0)
        {
            for (i=0; i<mid; i++)
            {
                if (i<mid-1)
                {
                    printf("%d %d ",arr[a-1-i],arr[i]);
                }
                else
                {
                    printf("%d %d",arr[a-1-i],arr[i]);
                }
            }
        }
        else
        {
            for (i=0; i<mid; i++)
            {
                printf("%d %d ",arr[a-1-i],arr[i]);
            }
            printf("%d",arr[mid]);
        }
        printf("
");
    }
    return 0;
}
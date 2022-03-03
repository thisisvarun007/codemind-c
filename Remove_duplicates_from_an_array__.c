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
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            if (i!=j && arr[i]!=-1)
            {
                if (arr[i]==arr[j])
                {
                    arr[j]=-1;
                }
            }
        }
    }
    for (i=0; i<a; i++)
    {
        if (arr[i]!=-1)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
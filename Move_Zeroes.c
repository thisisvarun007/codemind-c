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
        for (j=0; j<a-1; j++)
        {
            if (arr[j]==0 && arr[j+1]!=0)
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (i=0; i<a; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
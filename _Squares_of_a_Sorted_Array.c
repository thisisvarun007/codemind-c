#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],brr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        brr[i]=pow(arr[i],2);
    }
    for (i=0; i<a; i++)
    {
        for (j=0; j<a-1; j++)
        {
            if (brr[j]>brr[j+1])
            {
                int temp=brr[j];
                brr[j]=brr[j+1];
                brr[j+1]=temp;
            }
        }
    }
    for (i=0; i<a; i++)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}
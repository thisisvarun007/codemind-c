#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d%d",&a,&n);
    int arr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int ft,tmp;
    for (i=0; i<n; i++)
    {
        ft=arr[0];
		for (j=0; j<a-1; j++)
        {
           tmp=arr[j+1];
		   arr[j]=tmp;
        }
        arr[a-1]=ft;
    }
    for (i=0; i<a; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
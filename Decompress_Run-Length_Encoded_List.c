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
    int j,k,freq,val;
    for (i=0; i<a; i+=2)
    {
        freq=arr[i];
        val=arr[i+1];
        for (j=0; j<freq; j++)
        {
            printf("%d ",val);
        }
    }
    return 0;
}
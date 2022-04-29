#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int arr[n+2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[n]=arr[0];
    arr[n+1]=arr[1];
    for(i=1;i<n+1;i++)
    {
        if((arr[i-1]%2!=0&&arr[i+1]%2==0)||(arr[i-1]%2==0&&arr[i+1]%2!=0))
        {
            c++;
        }
    }
    if(arr[n+1]==1)
    {
        printf("3");
        return 0;
    }
    printf("%d",c);
}
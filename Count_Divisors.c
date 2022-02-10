#include<stdio.h>
int main()
{
    int l,r,k;
    scanf("%d%d%d",&l,&r,&k);
    int i,count=0;
    for (i=l; i<=r; i++)
    {
        if (i%k==0)
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
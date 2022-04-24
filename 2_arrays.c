#include<stdio.h>
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
        scanf("%d",&brr[i]);
    }
    int c=0,s1=0,s2=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]==-1)
        {
            c++;
        }
        else
        {
            s1+=arr[i];
        }
    }
    for (i=0; i<a; i++)
    {
        if (brr[i]==-1)
        {
            c++;
        }
        else
        {
            s2+=brr[i];
        }
    }
    if (c==2)
    {
        printf("Infinite");
    }
    else
    {
        int count=0;
        for (i=0; i<10000; i++)
        {
            if (i+s1==s2)
            {
                count++;
            }
        }
        printf("%d",count);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c=0,count=0,b,temp;
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        c=0;
        temp=arr[i];
        while (temp>0)
        {
            b=temp%10;
            c+=1;
            temp=temp/10;
        }
        if (c%2==0)
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i,rev,c,temp;
    for (i=a; i<=b; i++)
    {
        temp=i;
        rev=0;
        while (temp>0)
        {
            c=temp%10;
            rev=(rev*10)+c;
            temp=temp/10;
        }
        if (i==rev)
        {
            printf("%d ",rev);
        }
    }
    return 0;
}

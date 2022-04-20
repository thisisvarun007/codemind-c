#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int xs=0,ys=0;
    for (i=0; i<a; i++)
    {
        if(i%2==0)
        {
            xs+=arr[i];
        }
        else
        {
            ys+=arr[i];
        }
    }
    int res=abs(xs-ys);
    if (res%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
    return 0;
}
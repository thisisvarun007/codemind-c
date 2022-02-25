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
    int b;
    scanf("%d",&b);
    int brr[b];
    for (i=0; i<a; i++)
    {
        scanf("%d",&brr[i]);
    }
    int t;
    scanf("%d",&t);
    int c=0;
    for (i=0; i<a; i++)
    {
        if (t>=arr[i] && t<=brr[i])
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
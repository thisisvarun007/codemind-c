#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,pro=1;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        pro=1;
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                pro*=arr[j];
            }
        }
        printf("%d ",pro);
    }
}
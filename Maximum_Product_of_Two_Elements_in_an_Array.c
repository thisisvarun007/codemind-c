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
    int j,pro,max=0;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                pro=(arr[i]-1)*(arr[j]-1);
                if (pro>max)
                {
                    max=pro;
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}
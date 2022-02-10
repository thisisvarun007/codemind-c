#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,c=0,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        c=0;
        for (j=0; j<a; j++)
        {
            if (j!=i)
            {
                if (arr[j]<arr[i])
                {
                    c+=1;
                }
            }
        }
        printf("%d ",c);
    }
    return 0;
}
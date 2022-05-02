#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for (i=0; i<a; i++)
    {
        for (j=i; j<a; j++)
        {
            if (arr[i]==arr[j])
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b],i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (j=0; j<b; j++)
    {
        int max=arr[0][j];
        for (i=0; i<a; i++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        printf("%d
",max);
    }
    return 0;
}
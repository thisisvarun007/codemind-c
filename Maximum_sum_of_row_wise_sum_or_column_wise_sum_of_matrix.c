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
    int rs=0,max=0,max2=0;
    for (j=0; j<b; j++)
    {
        rs=0;
        for (i=0; i<a; i++)
        {
            rs+=arr[i][j];
        }
        if (max<rs)
        {
            max=rs;
        }
    }
    for (i=0; i<a; i++)
    {
        rs=0;
        for (j=0; j<b; j++)
        {
            rs+=arr[i][j];
        }
        if (max2<rs)
        {
            max2=rs;
        }
    }
    if (max>max2)
    {
        printf("%d",max);
    }
    else
    {
        printf("%d",max2);
    }
    return 0;
}
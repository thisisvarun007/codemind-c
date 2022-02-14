#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int arr[m][m],i,j,s1=0,s2=0;
    for (i=0; i<m; i++)
    {
        for (j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<m; j++)
        {
            if (i==j)
            {
                s1+=arr[i][j];
            }
            if (i+j==m-1)
            {
                s2+=arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",s1);
    printf("Secondary Diagonal:%d",s2);
    return 0;
}
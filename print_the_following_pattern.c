#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for (j=a; j>=1; j--)
    {
        for (i=1; i<=j; i++)
        {
            printf("%d",i);
        }
        if (j==1)
        {
            break;
        }
        else
        {
            printf("
");
        }
    }
}
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j;
    if (a>=1 && a<=10000)
    {
        for (i=1; i<=a; i++)
        {
            for (j=a; j>=1; j--)
            {
                printf("%d ",j);
                if (j==1)
                {
                    printf("
");
                }
            }
        }
    }
    return 0;
}
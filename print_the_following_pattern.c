#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            if ((i==j) || (j==0) || (j==a-1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("
");
    }
    return 0;
}
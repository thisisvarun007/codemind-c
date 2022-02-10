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
            if (i==j || i+j==a-1)
            {
                printf("x");
            }
            else
            {
                printf("0");
            }
        }
        printf("
");
    }
    return 0;
}
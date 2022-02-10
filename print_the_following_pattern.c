#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int i,j;
    for (i=a-1; i>=0; i--)
    {
        for (j=1; j<=i+1; j++)
        {
            printf("%c ",arr[i]);
            if (j==i+1)
            {
                printf("
");
            }
        }
    }
    return 0;
}
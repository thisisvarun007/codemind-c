#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            printf("%c ",arr[i]);
            if (j==a-1)
            {
                printf("
");
            }
        }
    }
    return 0;
}
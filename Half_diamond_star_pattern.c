#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char ch='*';
    int i,j,k;
    if (a>=3 && a<=10000)
    {
       for (i=1; i<=a; i++)
       {
           for (j=1; j<=i; j++)
           {
               printf("%c",ch);
               if (j==i)
               {
                   printf("
");
               }
           }
       }
       for (i=a-1; i>=1; i--)
       {
           for (j=1; j<=i; j++)
           {
               printf("%c",ch);
               if (j==i)
               {
                   printf("
");
               }
           }
       }
    }
    else
    {
        printf("The pattern is not possible");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>=-1000 && a<=1000)
    {
        if (a>0)
        {
            printf("Positive Number");
        }
        else
        {
            printf("Negative Number");
        }
    }
    return 0;
}
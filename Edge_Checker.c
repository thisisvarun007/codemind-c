#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if ((a==1 || a==10) && (b==1 || b==10) && a!=b)
    {
        printf("Yes");
    }
    else
    {
        int diff=a-b;
        if (diff<0)
        {
            diff*=-1;
        }
        if (diff==1)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,a=1,d=1;
    scanf("%d",&n);
    int i;
    double sum=0,term=0;
    for (i=0; i<n; i++)
    {
        term=a+(i*d);
        sum+=(1/term);
    }
    printf("%.2lf",sum);
}
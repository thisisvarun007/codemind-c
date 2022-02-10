#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i;
    long int sum=0;
    if (a>=1 && a<=10)
    {
        long int arr[a];
        for (i=0; i<a; i++)
        {
            scanf("%ld",&arr[i]);
        }
        for (i=0; i<a; i++)
        {
           sum+=arr[i]; 
        }
        printf("%ld",sum);
        return 0;
    }
}
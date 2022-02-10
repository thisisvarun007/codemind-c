#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    int noe=0,noo=0;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        if (arr[i]%2==0)
        {
            noe+=1;
        }
        else
        {
            noo+=1;
        }
    }
    printf("%d %d",noe,noo);
    return 0;
}
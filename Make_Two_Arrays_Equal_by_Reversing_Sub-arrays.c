#include<stdio.h>
int main()
{
    int a1;
    scanf("%d",&a1);
    int arr1[a1],i,j;
    for (i=0; i<a1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int a2;
    scanf("%d",&a2);
    int arr2[a2];
    for (i=0; i<a1; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int f=0,flag=0;
    for (i=0; i<a1; i++)
    {
        f=0;
        for (j=0; j<a1; j++)
        {
            if (arr1[i]==arr2[j])
            {
                f=1;
                break;
            }
        }
        if (f==1)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
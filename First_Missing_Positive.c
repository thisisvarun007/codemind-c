#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos=1;
    while(1)
    {
        int flag=0;
        for (i=0; i<a; i++)
        {
            if (arr[i]==pos)
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if (flag==1)
        {
            break;
        }
        else
        {
            pos++;
        }
    }
    printf("%d",pos);
    return 0;
}
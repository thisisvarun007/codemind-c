#include<stdio.h>
int main()
{
    int t,z;
    scanf("%d",&t);
    for (z=0; z<t; z++)
    {
        int a,i;
        scanf("%d",&a);
        int arr[a];
        for (i=0; i<a-1; i++)
        {
            scanf("%d",&arr[i]);
        }
        int miss=1;
        while (1)
        {
            int flag=0;
            for (i=0; i<a-1; i++)
            {
                if (arr[i]==miss)
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
                miss++;
            }
        }
        printf("%d
",miss);
    }
    return 0;
}
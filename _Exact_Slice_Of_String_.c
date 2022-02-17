#include<stdio.h>
int main()
{
    char str[10000];
    scanf("%[^
]s",str);
    int s,e,i;
    scanf("%d%d",&s,&e);
    for (i=s; i<=e; i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
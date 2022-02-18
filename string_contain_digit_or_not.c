#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int c=0,i;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]>=48 && str[i]<=57)
        {
            c++;
        }
    }
    if (c>=1)
    {
        printf("Contains %d digit",c);
    }
    else
    {
        printf("Doesn't contain digit");
    }
    return 0;
}
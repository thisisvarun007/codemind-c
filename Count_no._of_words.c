#include<stdio.h>
int main()
{
    char str[200];
    scanf("%[^
]s",str);
    int i,c=1;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]==32)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
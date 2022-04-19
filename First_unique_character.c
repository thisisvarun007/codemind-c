#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,j,c=0,co=0;
    char res;
    for (i=0; str[i]!=NULL; i++)
    {
        c=0;
        for (j=0; str[j]!=NULL; j++)
        {
            if (i!=j)
            {
                if (str[i]==str[j])
                {
                    c++;
                }
            }
        }
        if (c==0)
        {
            res=str[i];
            co++;
            break;
        }
    }
    if (co==0)
    {
        printf("-1");
    }
    else
    {
        printf("%c",res);
    }
    return 0;
}
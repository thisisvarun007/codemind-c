#include<stdio.h>
int main()
{
    int hurl,spin,speed;
    scanf("%d%d%d",&hurl,&spin,&speed);
    if (hurl>50 && spin>60 && speed>100)
    {
        printf("%d",10);
    }
    else if (hurl>50 && spin>60)
    {
        printf("%d",9);
    }
    else if (spin>60 && speed>100)
    {
        printf("%d",8);
    }
    else if (hurl>50 && speed>100)
    {
        printf("%d",7);
    }
    else if (hurl>50 || spin>60 || speed>100)
    {
        printf("%d",6);
    }
    else
    {
        printf("%d",5);
    }
    return 0;
}
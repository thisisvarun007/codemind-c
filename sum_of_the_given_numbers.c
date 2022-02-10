#include<stdio.h>
int main()
{
    int a,i,s,n1,n2;
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {
      scanf("%d%d",&n1,&n2);
      s=n1+n2;
      printf("%d
",s);
    }
    return 0;
}
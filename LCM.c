
#include<stdio.h>
int main ()
{
int i,a,b,r;
scanf("%d%d",&a,&b);
for(i=1;a>i<b;i++)
   {
     r=a*i;
     if(r%b==0)
       break;
   }
   printf("%d",r);
}

#include<stdio.h>
#include<math.h>
int add_dig(int x)
{
	int sum=0,r,res;
	while (1>0)
	{
		sum=0;
		while (x>0)
		{
			r=x%10;
			sum+=r;
			x=x/10;
		}
		if (sum>9)
		{
			x=sum;
			continue;
		}
		else
		{
			break;
		}
	}
	return sum;
}
int main()
{
	int a,res;
	scanf("%d",&a);
	res=add_dig(a);
	printf("%d",res);
	return 0;
}
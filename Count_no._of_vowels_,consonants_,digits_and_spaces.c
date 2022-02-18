// count no of vow cons dig and space
#include<stdio.h>
int main()
{
	char str[1000];
	scanf("%[^
]s",str);
	int v=0,c=0,d=0,w=0,i;
	for (i=0; str[i]!=NULL; i++)
	{
		if (str[i]>=65 && str[i]<=90)
		{
			if (str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85)
			{
				v++;
			}
			else
			{
				c++;
			}
		}
		else if (str[i]>=97 && str[i]<=122)
		{
			if (str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117)
			{
				v++;
			}
			else
			{
				c++;
			}
		}
		else if (str[i]>=48 && str[i]<=57)
		{
			d++;
		}
		else if (str[i]==32)
		{
			w++;
		}
	}
	printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,c,d,w);
}
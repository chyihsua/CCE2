#include <stdio.h>
char line[2000];

int main()
{
	int t=1;
	while ( gets(line))
	{
		if (t>1) printf("\n");//�L�Ŧ�

		int ans[256]={};

		for (int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;//�p�⦸��
		}

		for(int f=1;f<1000;f++)//���Ʊq�p��j
		{
			for (int c=128;c>=32;c--)//ASCII�q�j��p
			{
				if (ans[c]==f) printf("%d %d\n",c,ans[c]);
			}
		}
		t++;
	}
}
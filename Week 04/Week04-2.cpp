#include <stdio.h>
char line[2000];

int main()
{
	int t=1;
	while ( gets(line))
	{
		if (t>1) printf("\n");//印空行

		int ans[256]={};

		for (int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;//計算次數
		}

		for(int f=1;f<1000;f++)//次數從小到大
		{
			for (int c=128;c>=32;c--)//ASCII從大到小
			{
				if (ans[c]==f) printf("%d %d\n",c,ans[c]);
			}
		}
		t++;
	}
}

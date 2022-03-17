#include <stdio.h>
char line[2000];

int main()
{
	int t=1;
	while ( gets(line))
	{
		if (t>1) printf("\n");//︽

		int ans[256]={};
		int max=0;//程

		for (int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;//璸衡Ω计
			if (ans[c]>max) max=ans[c];//穝程Ω计
		}

		for(int f=1;f<=max;f++)//Ω计眖
		{
			for (int c=128;c>=32;c--)//ASCII眖
			{
				if (ans[c]==f) printf("%d %d\n",c,ans[c]);
			}
		}
		t++;
	}
}

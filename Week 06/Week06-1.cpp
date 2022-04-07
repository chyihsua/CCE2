#include <stdio.h>
char tree[1000000][40];
///     100萬棵樹 40字母

int main()
{
	int T;
	scanf("%d\n\n",&T);

	for (int t=1;t<=T;t++)
	{
		int N=0;
		while (gets(tree[N])) ///讀到第N棵樹
		{
			if (tree[N][0]==0)break; ///如果第N棵樹的第0字母為0
			N++;
		}
		if (t>1) printf("\n");
		printf("Test Case %d: %d lines\n",t,N);
	}
}

#include <stdio.h>
char tree[1000000][40];
///     100�U�ʾ� 40�r��

int main()
{
	int T;
	scanf("%d\n\n",&T);

	for (int t=1;t<=T;t++)
	{
		int N=0;
		while (gets(tree[N])) ///Ū���N�ʾ�
		{
			if (tree[N][0]==0)break; ///�p�G��N�ʾ𪺲�0�r����0
			N++;
		}
		if (t>1) printf("\n");
		printf("Test Case %d: %d lines\n",t,N);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40];
///     100萬棵樹 40字母

int compare ( const void *p1,const void *p2 )
{
    char *s1=(char*)p1;
    char *s2=(char*)p2;
    return strcmp(s1,s2);
}

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

		qsort(tree,N,40,compare);
		///要排的陣列,幾個,單位大小,運用函式

		for (int i=0;i<N;i++)
		{
            printf("%s\n",tree[i]);
		}
	}
}

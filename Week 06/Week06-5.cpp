#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40];
///     100�U�ʾ� 40�r��

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
		while (gets(tree[N])) ///Ū���N�ʾ�
		{
			if (tree[N][0]==0)break; ///�p�G��N�ʾ𪺲�0�r����0
			N++;
		}
		if (t>1) printf("\n");

		qsort(tree,N,40,compare);

		printf("%s ",tree[0]);
		int combo=1;///�p�⭫�Ʀ���

		for (int i=1;i<N;i++)///�q�Ĥ@����ƶ}�l���
		{
			if (strcmp(tree[i-1],tree[i])==0)///�e��ۦP
				combo++;
			else///�`��
			{
				printf("%.4f\n",combo*100.0/N);
				printf("%s ",tree[i]);
				combo=1;///combo�k�s
			}
		}
		printf("%.4f\n",combo*100.0/N);///�̫�@����

	}
}

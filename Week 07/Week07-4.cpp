#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char line[2001][80];///2001�O���F���t��t+1

int compare (const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int t;
	scanf("%d\n",&t);

	for (int i=0;i<t;i++)
	{
		scanf("%s",line[i]);
		char others[80];
		gets( others );
	}

	qsort (line,t,80,compare);

	line[t][0]=0;///�w�q��t����ơA�]���j�餣�|�]���t�������n�����
	int combo=1;
	for (int i=0;i<t;i++)
	{
		if (strcmp(line[i],line[i+1])==0) combo++;
		else
		{
			printf("%s %d\n",line[i],combo);
			combo=1;
		}
	}
}

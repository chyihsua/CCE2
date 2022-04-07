#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char line[2001][80];///2001是為了比較t跟t+1

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

	line[t][0]=0;///定義第t筆資料，因為迴圈不會跑到第t筆但須要做比較
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

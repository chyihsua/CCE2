#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char line[2000][80];

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
		scanf("%s",line[i]);///讀國家
		char others[80];///放用不到的人名
		gets( others );///讀人名
	}

	qsort (line,t,80,compare);

	for (int i=0;i<t;i++)
	{
		printf("%s\n",line[i]);
	}
}

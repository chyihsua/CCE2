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
		gets(line[i]);
	}

	qsort (line,t,80,compare);

	for (int i=0;i<t;i++)
	{
		printf("%s\n",line[i]);
	}
}

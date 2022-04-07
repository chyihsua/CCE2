#include <stdio.h>
char line[2000][80];

int main()
{
	int t;
	scanf("%d\n",&t);

	for (int i=0;i<t;i++)
	{
		gets(line[i]);
	}


	for (int i=0;i<t;i++)
	{
		printf("%s\n",line[i]);
	}
}

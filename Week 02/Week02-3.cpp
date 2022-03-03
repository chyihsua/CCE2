#include <stdio.h>

char line[200];

int main()
{
	while (scanf("%s",line)==1)
	{
		printf("%s -- is ...\n",line);
	}
}

#include <stdio.h>
#include <string.h>

char line[2000];

int main()
{
	for (int k=0;k<4;k++)
	{
		scanf("%s",line);
		int N= strlen(line);
		int ans=0;
		for (int i=0;i<N;i++)
		{
			if (line[i]=='2') ans++;
		}
		printf("%d\n",ans);
	}
		return 0;
}

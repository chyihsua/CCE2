#include <stdio.h>
#include <string.h>

char line[2000];

int main()
{
	int total=0;
	while(scanf("%s",line)==1)
	{
		int N= strlen(line);
		int ans=0;
		for (int i=0;i<N;i++)
		{
			if (line[i]=='2') ans++;
		}
		printf("%d\n",ans);
		total+=ans;
	}
	printf("Total: %d\n",total);
		return 0;
}

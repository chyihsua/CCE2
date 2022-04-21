#include <stdio.h>
char name[100][80];
int grade[100];

int main()
{
    int n;
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    {
        scanf("%s %d",name[i],&grade[i]);
    }

    for (int k=0;k<n;k++)
    {
    	for(int i=0;i<n-1;i++)
    	{
    		if (grade[i]<grade[i+1])
    		{
    			int temp=grade[i];
    			grade[i]=grade[i+1];
    			grade[i+1]=temp;
    		}
    	}
    }
    for (int i=0;i<n;i++)
    {
    	printf("%s %d\n",name[i],grade[i]);
    }
}

#include <stdio.h>
char line[2000];
int main()
{
    scanf("%s",line);
    for(int i=0;i<2000;i++)
    {
        if (line[i]=='2')
            printf("§ä¨ì2\n");
    }
    return 0;
}

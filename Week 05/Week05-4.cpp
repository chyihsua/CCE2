#include <stdio.h>

char line[40];

int main()
{
    int T;
    scanf("%d\n\n",&T);//讀入共有幾筆資料

    for (int t=1;t<=T;t++)//讀每一筆資料
    {
    	if (t>1) printf("\n");//第一筆之後的每一筆資料前跳行
    	printf("現在是第%d筆資料\n",t);

    	while(gets(line))//讀每一行資料
    	{
    		if (line[0]==0) break;//如果這一行的第一個字元==0跳出迴圈
    	}
    }
}

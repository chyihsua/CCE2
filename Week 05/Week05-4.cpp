#include <stdio.h>

char line[40];

int main()
{
    int T;
    scanf("%d\n\n",&T);//Ū�J�@���X�����

    for (int t=1;t<=T;t++)//Ū�C�@�����
    {
    	if (t>1) printf("\n");//�Ĥ@�����᪺�C�@����ƫe����
    	printf("�{�b�O��%d�����\n",t);

    	while(gets(line))//Ū�C�@����
    	{
    		if (line[0]==0) break;//�p�G�o�@�檺�Ĥ@�Ӧr��==0���X�j��
    	}
    }
}

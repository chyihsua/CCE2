#include <stdio.h>

int grade[10]={9,8,1,2,3,7,6,5,4,0};

int main()
{
    int n=10;

    while(1)
    {
        int change=0;//�ΨӧP�_�ƧǤF�S
        for (int i=0;i<n-1;i++)
        {
            if (grade[i]>grade[i+1])
            {
                int temp=grade[i];
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++;//���洫+1
            }
        }
        if (change==0) break;//�Ƨǧ������}�j��
        for (int i=0;i<n;i++)
        {
            printf("%d ",grade[i]);
        }
        printf("\n");
    }
}

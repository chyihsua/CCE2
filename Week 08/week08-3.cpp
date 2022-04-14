#include <stdio.h>
#include <string.h>
char names[3][20];//每個名字最多20字母
char grades[3];

int main()
{
    char name[20];
    int grade;
    for (int i=0;i<3;i++)
    {
        scanf("%s",name);
        scanf("%d",&grade);
        strcpy(names[i],name);//把名字複製到陣列
        grades[i]=grade;
    }

    for(int i=0;i<3;i++)
    {
        printf("%s 得到 %d\n",names[i],grades[i]);
    }
}

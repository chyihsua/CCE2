#include <stdio.h>
#include <string.h>
char names[3][20];
char grades[3];

int main()
{
    FILE *fin=fopen("file.txt","r+");//讀入的檔案

    char name[20];
    int grade;
    for (int i=0;i<3;i++)
    {
        fscanf(fin,"%s",name);
        fscanf(fin,"%d",&grade);
        strcpy(names[i],name);
        grades[i]=grade;
    }

    for(int i=0;i<3;i++)
    {
        printf("%s 得到 %d\n",names[i],grades[i]);
    }
}

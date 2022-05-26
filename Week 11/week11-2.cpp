#include <stdio.h>
char line[100];

int main()
{
    int t;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);
    printf("你讀到了t:%d\n",t);
    while (fgets(line,100,fin)) ///gets沒有跳行 fgets跳行存在
        ///     字串  長度 讀入
    {
        printf("讀到了: %s =\n",line);
    }
}

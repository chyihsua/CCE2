#include <stdio.h>
#include <map>
#include <string> ///沒.h
#include <string.h>
char line[100];

int main()
{
    int t;
    FILE * fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);
    std::map<std::string ,int >table;
    ///            字串   整數

    while(fgets(line,100,fin))
    {
        line[strlen(line)-1]=0;///處理掉跳行 將跳行用0蓋掉
        printf("讀到了: %s =\n",line);
        table[line]++;
    }
}

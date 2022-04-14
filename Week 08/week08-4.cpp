#include <stdio.h>

int main()
{
    FILE * fout=fopen("檔名.txt","w+");
    ///檔案的指標 要打開 w+是開啟方式write+
    fprintf(fout,"Helllo 我在檔案裡,哈哈");

    printf("Hello World\n");
}

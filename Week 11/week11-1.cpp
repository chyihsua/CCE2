#include <stdio.h>
char line[100];

int main()
{
    int t;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);
    printf("�AŪ��Ft:%d\n",t);
}

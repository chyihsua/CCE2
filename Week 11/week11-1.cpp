#include <stdio.h>
char line[100];

int main()
{
    int t;
    FILE*fin=fopen("input.txt","r");
    fscanf(fin,"%d",&t);
    printf("§AÅª¨ì¤Ft:%d\n",t);
}

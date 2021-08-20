//读入并显示用户输入的内容，直到读到文件结尾或空行//
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];

    puts("Enter strings (empty line to quit):");
    while (fgets(words,STLEN,stdin)!=NULL&&words[0]!='\n')
        fputs(words, stdout);
    puts("Done.");

    return 0;
}
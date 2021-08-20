//gfet()和fput()的使用
#include <stdio.h>
#define STLEN 14
int main(void)
{
    char words[STLEN];

    puts("Enter a string,please:");
    fgets(words, STLEN, stdin);//fgets的第1个参数——输入，第2个——读入字符的最大数量，第3个——要读入的文件，如果要读入键盘输入的数据用stdin作为参数//
    printf("Your string twice (puts, then fputs())：\n");
    puts(words);
    fputs(words, stdout);//fput的第2个参数——输出的文件，如果要输出在计算机显示器上，那么就是stdout//
    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts, then fputs())：\n");
    puts(words);//puts函数会在带输出的字符串的末尾加一个\n，而fputs就不会加//
    fputs(words, stdout);
    puts("Done.");

    return 0;
}
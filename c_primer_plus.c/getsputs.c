//使用gets()和puts()
#include <stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];

    puts("Enter a string,please.");
    gets(words); //典型用法
    //gets无法检查内部的word是否装得下输入的字符；该函数只存储字符数组的首元素的地址(数组名的缘故)
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");
    return 0;
}
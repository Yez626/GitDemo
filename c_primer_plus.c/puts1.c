#include <stdio.h>
//puts()函数改良版：去掉了末尾自动加入的'/n'//
void put1(const char *string)
{
    while (*string!='\0')
        putchar(*string++);
}

//类puts()函数，而且函数会给出待打印字符的个数//
int put2(const char * string)
{
    int count = 0;
    while (*string) //非常有意思的一点：如果指向空字符那么*string=0，假，跳出循环//
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return (count);
}

//一个简单的测试函数//
int main(void)
{
    put1("If I'd as much money");
    put1("as I could spend,\n");
    printf("I count %d characters.\n", put2("I never would cry old chairs to mend."));
    return 0;
}
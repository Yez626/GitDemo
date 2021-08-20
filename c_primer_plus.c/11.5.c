//指针和字符串*/
#include <stdio.h>
int main(void)
{
    const char *mesg = "don't be a fool!";
    const char *copy;

    copy = mesg; //拷贝的不是字符串，而是字符串的地址//
    printf("%s\n", copy);
    printf("mesg=%s;&mesg=%p;value=%p\n", mesg, &mesg, mesg);
    printf("copy=%s;&copy=%p;value=%p\n", copy, &copy, copy);

    return 0;
}
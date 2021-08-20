#define MSG "I'm special"

#include <stdio.h>
int main()
{
    char ar[] = MSG;
    const char *pt = MSG;
    printf("address of \"I'm special\":%p \n", "I'm special");//静态存储
    printf("                     address ar:%p\n", ar);//动态存储
    printf("                     address pt:%p\n", pt);
    printf("address of \"I'm special\":%p \n", "I'm special");
    return 0;
}
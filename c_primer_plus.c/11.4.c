#include <stdio.h>
#define a 40
#define b 5
int main(void)
{
    const char *mytalents[b] = {"Adding numbers swiftly", "Multiplying accurately", "Stashing data", "Following instructions to the letter", "Understanding the C language"}; //指向字符串的指针数组
    ///mytalents 中的指针指向初始化是所用字符串字面量的位置，这些字符串字面量被存储在静态内存中；
    char yourtalents[b][a] = {"Walking in a straight line", "Sleeping", "Watching television", "Mailing letters", "Reading email"};//char类型数组的数组
    //yourtalents 中的数组存储这字符串字面量的副本，所以每个字符串被存储了两次
    int i;

    puts("Let's compare talents.");
    printf("%-36s %-25s\n", "My talents", "Your talents");
    for (i = 0; i < b;i++)
        printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    return 0;
}
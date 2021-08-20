#include <stdio.h>
void showmenu(void);
int choose(int, int);
int main()
{
    int res;
    showmenu();
    while((res=choose(1,4))!=4)
    {
        printf("I'd like to choose %d.\n", res);
        showmenu();
    }
    printf("Bye!");
    return 0;
}
void showmenu(void)
{
    printf("Please　choose　one　of　the　following:\n");
    printf("1) copy　files\t\t2) move　files\n");
    printf("3) remove　files\t4) quit\n");
}
int choose(int low,int high)
{
    int good;
    int arg ;
    good=scanf("%d", &arg);
    while(good==1&&(arg<low||arg>high))
    {
        printf("%d is not a valid value.Please try again!");
        showmenu();
        scanf("%d", &arg);
    }
    if (good!=1)
    {
        arg = 4;
    }
    return arg;
}
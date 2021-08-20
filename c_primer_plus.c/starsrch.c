//这是一个查找函数，查找要找到的字符
#include <stdio.h>
#include <string.h>
#define LISTSIZE 6
int main ()
{
    const char *List[LISTSIZE] =
        {
            "astronomy", "astouding", "astrophysics",
             "ostracize","asterism","astrophobia"
        };
    int count = 0;
    int i;
    for (i = 0; i < LISTSIZE;i++)
        if (strncmp(list[i],"astro",5)==0)
        {
            printf("Found: %s\n", list[i]);
            count++;
        }
    printf("The list contained %d words beginning"
           "with astro.\n",
           count);
    return 0;
}
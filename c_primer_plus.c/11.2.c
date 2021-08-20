#include <stdio.h>
int main(void)
{
    char c[5];
    c[0] = 'J';
    c[1] = 'o';
    c[2] = 'h';
    c[3] = 'n';
    printf("%s\n", c);
    printf("%s,%p,%c\n", "We", "are", *"space farers");
    
    return 0;
}
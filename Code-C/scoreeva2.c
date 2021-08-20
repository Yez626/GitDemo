#include <stdio.h>
int main()
{
    int a,score;
    printf("please enter your score：");
    scanf("%d", &a);
    score = a >= 0 && a <= 100 ? a / 10 : -1;
    switch(score)
{
    case 10:
    case 9:
        printf("%d--A\n", score);
        break;
    case 8:
        printf("%d--B\n", score);
        break;
    case 7:
        printf("%d--C\n", score);
        break;
    case 6:
        printf("%d--D\n", score);
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0: 
        printf("%d--failure", score);
        break;
    default:
        printf("Warning!");
}
return 0;
}
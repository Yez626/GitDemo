#include <stdio.h>
int main()
{
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0, eCount = 0;
    char a;
    printf("please enter the letter ended with#:");
    a = getchar();
    while (a!='#')
    {
        switch(a)
        {
        case 'A':
        case 'a':
            printf("90--100\n");
            aCount++;
            break;
        case 'B':
        case 'b':
            printf("80--90\n");
            bCount++;
            break;
        case 'C':
        case 'c':
            printf("70--80\n");
            cCount++;
            break;
        case 'D':
        case 'd':
            printf("60--70\n");
            dCount++;
            break;
        case 'E':
        case 'e':
            printf("<60\n");
            eCount++;
            break;
        case '\n':
        case ' ':
            break;
        default:
            printf("incorect input.please try again.");
        }
    a = getchar();
    }
    printf("result:A:%d,B:%d,C:%d,D:%d,E:%d", aCount, bCount, cCount, dCount, eCount);
    return 0;
}
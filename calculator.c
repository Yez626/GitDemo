#include <math.h>
#include <stdio.h>
int main()
{
    char op;
    char reply;
    int data1, data2;
    
    
do{ printf("please enter the expression:");
    scanf("%d%c%d", &data1, &op, &data2);
    switch(op)
    {
    case'+':
        printf("%d+%d=%d\n", data1, data2, data1 + data2);
    break;
    case '-':
        printf("%d-%d=%d\n",data1,data2,data1-data2);
    break;
    case '*':
        printf("%d*%d=%d\n",data1,data2,data2*data1);
    break;
    case '/':
        if (0==data2)
            printf("division by 0!");
        else
            printf("%d/%d=%d\n",data1,data2,data1/data2);
       break;
    default:
        printf("Unknown operator!");
    }
    printf("do you want to continue(y/n)?");
    scanf(" %c", &reply);
} while (reply == 'Y' || reply == 'y');
printf("the programme is over!");
return 0;
}
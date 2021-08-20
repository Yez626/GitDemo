#include <stdio.h>
#define ROWS 3
#define COLS 5
void input_arr(int rows,double a[][COLS])
{
    printf("please enter 3 groups of number:\n");
    for (int i = 0; i < rows;i++)
    {
        printf("please enter 5 double number seprate by enter:\n");
        for (int j = 0; j < cols;j++)
            scanf("%lf", &a[i][j]);
    }
}
double group_average(int cols,const double a[])
{
    double sum=0;
    for (int i = 0; i < cols;i++)
        sum += a[i];
    return sum / cols;
}
double arr_average(int rows,int cols,const double a[rows][cols])
{
    int sum = 0;
    for (int i = 0; i < rows;i++)
    {
        for (int j = 0; j < cols;j++)
            sum += a[i][j];
    }
    return sum / (rows * cols);
}
double Max(int rows,int cols,const double a[rows][cols])
{
    double max = a[0][0];
    for (int i = 0; i < rows;i++)
    {  
        for (int j = 0; j < cols;j++)
        {
            if (a[i][j]>max)
                max = a[i][j];
        }
    }
    return max;
}
void show_arr(int rows, const double t[][COLS])
{
    printf("let's check what the array is, shall we?");
    for (int i = 0; i < rows;i++){
        for (int j = 0; j < COLS;j++)
            printf("%f ", t[i][j]);
        printf("\n");
    }
    printf("The average of every row is:\n");
    for (int i = 0; i < rows;i++)
        printf("The %d row's average is %g.\n ", i, group_average(COLS, t[i]));
    printf("the average of the whole group is %g", arr_average（ROWS, COLS, t);
    printf("the max element in the group is %g", Max(ROWS, COLS, t));
}
int main(void)
{
    double a[ROWS][COLS];
    input_arr(ROWS, a);
    show_arr(ROWS, a);
    return 0;
}
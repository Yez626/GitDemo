#include <stdio.h>
#define COLS 5
#define ROWS 3
void show_arr(int rows, int cols,const int t[rows][cols])
{
    for (int i = 0; i < rows;i++){
        for (int j = 0; j < cols;j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
}
void double_arr(int rows,int cols,int t[rows][cols])
{
    for (int i = 0; i <rows ;i++)
    {
        for (int j = 0; j < cols;j++)
        {    
            t[i][j] *=2;
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}
int main(void)
{
    int a[ROWS][COLS] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    show_arr(ROWS, COLS, a);
    double_arr(ROWS, COLS, a);
    return 0;
}
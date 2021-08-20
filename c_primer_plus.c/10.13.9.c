#include <stdio.h>
void show_arr(int n, int m, const double target[n][m]);
void cpp_arr(int n, int m, double target[n][m], const double source[n][m]);
int main()
{
    int n = 3;
    int m = 5;
    double target[n][m], source[][5] = {{0.2, 0.4, 2.4, 3.5, 6.6}, {8.5, 3.1, 1.1, 2.2, 3.3}, {9.1, 8.5, 2.3, 6.1, 8.4}};
    cpp_arr(n, m, target, source);
    show_arr(n, m, target);
    return 0;
}
void cpp_arr(int n,int m,double target[n][m],const double source[n][m])
{
    for (int i = 0; i < n;i++)
        for (int j = 0; j < m;j++)
            target[i][j] = source[i][j];
}
void show_arr(int n,int m,const double target[n][m])
{
    for (int i = 0; i < n;i++)
    {    
        for (int j = 0; j < m;j++)
            printf("%g ", target[i][j]);
        printf("\n");
    }
}
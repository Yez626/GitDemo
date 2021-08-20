#include <stdio.h>
void invert(double a[],int n)
{
    int i;
    double temp;
    for (i = 0; i < (n / 2);i++)
        {temp = *(a+i);
        *(a+i) = *(a+n-i-1);
        *(a+n-i-1) = temp;}
}
int main()
{
    int i;
    double a[3] = {1, 2, 3};
    invert(a, 3); 
    for (i = 0; i < 3; i++)
        printf("%f\n", a[i]);
    return 0;
}
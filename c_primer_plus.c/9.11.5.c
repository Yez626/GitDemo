void large_of(double *x,double *y)
{
    double Max;
    if (*x>*y)
        Max = *x;
    else
        Max = *y;
    *x = Max;
    *y = Max;
}
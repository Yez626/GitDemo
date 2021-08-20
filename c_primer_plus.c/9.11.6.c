#include <stdio.h>
void swap(double *a,double *b,double *c)
{
    int m;
    *a < *b ? (*a < *c ? (*b < *c ? : m = *b, *b = *c, *c = m) : m = *b,  *b = *a, *a = *c, *c = m) : (*b < *c ? : (*a < *c ? : m = *b,  *b = *a, *a = *c, *c = m));
    return 0;
}
#include <stdio.h>
float Intergral(float (*f)(float),float a,float b)
{
    float s, h;
    int n = 100, i;
    h = (b - a) / n;
    s = ((*f)(a) + (*f)(b)) / 2;
    for (i = 1; i < n;i++)
    {
        s += (*f)(a + i * h);
    }
    return s * h;
}
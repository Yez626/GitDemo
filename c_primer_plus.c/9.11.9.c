double power(double x,int y)
{
    int p=0,i;
    double pow = 1;
    if (x==0)
    {
        if (y==0)
        {
            printf("0^0 undefined");
            return -1;
        }
        else
        {
            return 0;
        }
    }
    if (y==0)
    {
        return 1;
    }
    if (y<0)
    {
        p = 1;
        y = -y;
    }
    pow = power(x, y - 1) * x;
    if (p)
        return 1 / pow;
    else
        return pow;
}
    
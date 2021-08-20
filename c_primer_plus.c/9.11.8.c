double power(double x,int y)
{
    int p=0,i;
    double pow = 1;
    if (y==0)
    {
        if (x==0)
        {
            printf("0^0 undefined");
            return -1;
        }
        else
        {
            return 1;
        }
    }
    if (x==0)
    {
        return 0;
    }
    //try to learn something here
    else if (x<0)
    {
        y = -y;
        p = 1;
    }
        for (i = 0; i < y;i++)
        {
            pow *= x;
        }
        
    if (p)
        return 1/pow;
    else
        return pow;
}
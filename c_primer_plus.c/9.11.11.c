void Fibonacci(int n)
{
    int i = 0;
    long int x, y, temp;

    for (x=1,y=0,i = 0; i <= n;i++)
    {
        temp = x + y;
        x = y;
        y = temp;
        printf("%ld", temp);
    }   
}
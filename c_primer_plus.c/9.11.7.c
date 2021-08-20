int location(char ch)
{
    int m;
    m=scanf("%c", ch);
    if (m==1)
    {
        return ch - 'A' + 1;
    }
    else
        return -1;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z;
    printf("Man \t Women \t Children\n;");
    for (x = 0; x <= 30;x++)
    {
        for (y = 0; y <= 30;y++)
        {
            for (z = 0; z <= 30;z++)
            {
                if (x+y+z==30&&3*x+2*y+z==50)
                    printf("%3d\t%5d\t%8d\n", x, y, z);
            }
        }
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int n, dias;
    double c;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%lf", &c);
        
        dias = ceil( log(c) / log(2) );
        
        printf("%d dias\n", dias);
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int d, vf, vg;
    double tf, dg, tg;
    char c;

    scanf("%d %d %d", &d, &vf, &vg);

    tf = 12.0 / vf;
    dg = sqrt( d*d + 12*12 );
    tg = dg / vg;

    c = (tg <= tf) ? 'S' : 'N';
    printf("%c\n", c);

    return 0;
}

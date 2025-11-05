#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q;
    char c;

    scanf("%d\n%d\t%c\t%d", &n, &p, &c, &q);

    c == '+' ? p += q : p *= q;
    if (p <= n) printf("OK\n");
    else printf("OVERFLOW\n");

    return 0;
}
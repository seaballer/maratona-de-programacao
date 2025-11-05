#include <stdio.h>

int fib(int n, int *calls)
{
    (*calls)++;
    if (n == 1 || n == 0)
    {
        return n;
    }

    return fib(n-1, calls) + fib(n-2, calls);
}

int main()
{
    int n, x, calls, f;

    scanf("%d", &n);

    while (n--)
    {
        calls = -1;
        f = 0;
        scanf("%d", &x);

        f = fib(x, &calls);

        printf("fib(%d) = %d calls = %d\n", x, calls, f);
    }

    return 0;
}
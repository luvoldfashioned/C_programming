#include <stdio.h>
#include <stdlib.h>

long fib_log(long n);

long fib(long n)
{
    if (n <= 1) return n;
    else return fib_log(n - 1) + fib_log(n - 2);
}

long fib_log(long n)
{
    long i, result;
    static int tabs = 0;

    tabs++;
    for (i = 1; i < tabs; i++)
        printf("| ");
    printf("> fib(%ld)\n", n);
    result = fib(n);
    for (i = 1; i < tabs; i++)
        printf("| ");
    tabs--;
    printf("< fib(%ld)=%ld\n", n, result);

    return result;
}

int main(void)
{
    fib_log(4);

    return EXIT_SUCCESS;
}
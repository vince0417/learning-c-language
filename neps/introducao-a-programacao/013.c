#include <stdio.h>

int fib(int n)
{

    if (n <= 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, fat;
    scanf("%d", &n);
    fat = fib(n);
    printf("%d\n", fat);
}

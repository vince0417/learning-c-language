#include <stdio.h>

int main()
{
    int x, i, valor;
    scanf("%d", &x);

    for (i = 1; i <= 10; i++)
    {
        valor = x * i;
        printf("%d * %d = %d\n", x, i, valor);
    }
    return 0;
}
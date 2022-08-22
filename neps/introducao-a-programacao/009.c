#include <stdio.h>

int main()
{
    int a, b, i;
    scanf("%d", &a);
    scanf("%d", &b);

    // queremos que o a seja menor que b, entao
    // se a for maior que b, colocamos o valor de b em a e o de a em b
    if (a > b)
    {
        // trocar os valores de a e b
        int aux = a;
        a = b;
        b = aux;
    }

    for (i = a; i <= b; i++)
    {
        if (i == b)
            printf("%d\n", i);
        else
            printf("%d ", i);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int numero;
    scanf("%d", &numero);
    if (numero > 0)
    {
        printf("positivo\n");
    }
    else if (numero < 0)
    {
        printf("negativo\n");
    }
    else
    {
        printf("nulo\n");
    }
    return 0;
}

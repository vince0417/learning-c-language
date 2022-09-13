#include <stdio.h>

int main()
{

    int n[10], i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }

    printf("\n");

    for (i = 9; i >= 0; i--)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int s[10];
    int x, i, j, cont = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d ", &s[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < 10; i++)
    {
        if (x == s[i])
        {
            cont++;
        }
    }

    if (cont == 0)
    {
        printf("Mia x\n");
    }
    else
    {
        printf("%d\n", cont);

        for (i = 0; i < 10; i++)
        {
            if (x == s[i])
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}

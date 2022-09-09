#include <stdio.h>

int main()
{
    int s[10];
    int x, i, encontrou = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &s[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < 10; i++)
    {
        if (x == s[i])
        {
            encontrou = 1;
            break;
        }
    }

    if (encontrou == 1)
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }

    return 0;
}

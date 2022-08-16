#include <stdio.h>

int main()
{
    int x, y, media;
    scanf("%d", &x);
    scanf("%d", &y);
    media = (x * 2 + y * 3) / 5;
    if (media >= 7)
    {
        printf("Aprovado\n");
    }
    else if (media >= 3 && media < 7)
    {
        printf("Final\n");
    }
    else
    {
        printf("Reprovado\n");
    }
    return 0;
}

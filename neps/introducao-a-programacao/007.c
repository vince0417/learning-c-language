#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x >= 1 && y >= 1)
    {
        printf("Q1\n");
    }
    else if (x <= -1 && y >= 1)
    {
        printf("Q2\n");
    }
    else if (x <= -1 && y <= -1)
    {
        printf("Q3\n");
    }
    else if (x >= 1 && y <= -1)
    {
        printf("Q4\n");
    }
    else
    {
        printf("eixos\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    char s[50], x;
    int i = 0, cont = 0;

    scanf("%s %c", s, &x);

    while (s[i] != '\0')
    {
        if (x == s[i])
        {
            cont++;
        }
        i++;
    }

    printf("%d\n", cont);

    return 0;
}

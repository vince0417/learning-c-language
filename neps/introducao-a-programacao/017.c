#include <stdio.h>

int main()
{
    char s[50];
    int i;

    scanf("%s", s);

    while (s[i] != '\0')
    {
        i++;
    }
    printf("%d\n", i);

    return 0;
}

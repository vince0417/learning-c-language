#include <stdio.h>

int vogal(char letra)
{
    return ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u'));
}

int main()
{

    char s[50], vogais[50], cons[50];
    int i = 0, indice_v = 0, indice_c = 0;
    scanf("%s", s);

    while (s[i] != '\0')
    {
        if (vogal(s[i]))
        {
            vogais[indice_v] = s[i];
            indice_v++;
        }
        else
        {
            cons[indice_c] = s[i];
            indice_c++;
        }
        i++;
    }

    vogais[indice_v] = '\0';
    cons[indice_c] = '\0';

    printf("Vogais: %s\n", vogais);
    printf("Consoantes: %s\n", cons);

    return 0;
}

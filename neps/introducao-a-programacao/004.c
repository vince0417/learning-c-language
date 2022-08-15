#include <stdio.h>

int main()
{
    double const pi = 3.1416;
    double raio, area;
    scanf("%lf", &raio);
    area = pi * raio * raio;
    printf("%.2lf\n", area);
    return 0;
}

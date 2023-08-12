#include <stdio.h>

int funcaoMatematica(int m, int n)
{
    if (n == 1)
    {
        return m + 1;
    }
    if (m == 1)
    {
        return n + 1;
    }

    return funcaoMatematica(m, n - 1) + funcaoMatematica(m - 1, n);
}

int main()
{
    int n, m;
    printf("informe um valor: ");
    scanf("%d", &n);
    printf("informe outro valor: ");
    scanf("%d", &m);
    printf("resultado: %d", funcaoMatematica(m, n   ));
    return 0;
}
#include <stdio.h>

int produtoRescursivo(int x1, int x2)
{
    if (x2 == 0)
    {
        return 0;
    }
    return x1 + produtoRescursivo(x1, x2 - 1);
}

int main()
{
    int y, x1, x2;
    printf("informe o multiplicando: ");
    scanf("%d", &x1);
    printf("informe o multiplicador: ");
    scanf("%d", &x2);
    y = produtoRescursivo(x1, x2);
    printf("resultado: %d", y);
    return 0;
}
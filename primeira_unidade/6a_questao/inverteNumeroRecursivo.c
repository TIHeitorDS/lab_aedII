#include <stdio.h>

int inverteRescursivo(int num, int inverso)
{
    if (num == 0)
    {
        return inverso;
    }
    else
    {
        int resto = num % 10;
        inverso = inverso * 10 + resto;
        return inverteRescursivo(num / 10, inverso);
    }
}

int main()
{
    int n, inverso = 0;
    printf("informe um numero inteiro: ");
    scanf("%d", &n);
    inverso = inverteRescursivo(n, inverso);
    printf("Numero inverso = %d", inverso);

    return 0;
}

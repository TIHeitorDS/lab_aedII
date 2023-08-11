#include <stdio.h>

void triploPitagorico(int lados)
{
    for (int cateto1 = 1; cateto1 <= lados; cateto1++)
    {
        for (int cateto2 = cateto1; cateto2 <= lados; cateto2++)
        {
            int hipotenusa = cateto1*cateto1 + cateto2*cateto2;
            int raiz = 0;
            for (int i = 1; i <= lados; i++)
            {
                if (i*i == hipotenusa)
                {
                    raiz = i;
                    break;
                }
            }
            if (raiz <= lados)
            {
                printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
            }
        }
    }
}

int main()
{
    int lados;
    printf("Informe o numero inteiro referente aos tres lados: ");
    scanf("%d", &lados);
    triploPitagorico(lados);
    return 0;
}

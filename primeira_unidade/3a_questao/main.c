#include <stdio.h>

void triploPitagorico(int lados)
{
    for (int cateto1 = 1; cateto1 <= lados; cateto1++)
    {
        for (int cateto2 = cateto1; cateto2 <= lados; cateto2++)
        {
            for (int hipotenusa = cateto2; hipotenusa <= lados; hipotenusa++)
            {
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa)
                {
                    printf("(%d, %d, %d)", cateto1, cateto2, hipotenusa);
                }
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

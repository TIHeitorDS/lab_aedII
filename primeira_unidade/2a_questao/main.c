#include <stdio.h>

int diasDeAula(int dias, int mes, int ano)
{
    int diaFinal = 29, mesFinal = 10, semanas;
    mes *= 30;
    dias += mes;
    mesFinal *= 30;
    diaFinal += mesFinal;
    semanas = (diaFinal - dias) / 7;
    return (semanas * 2);
}

int main()
{
    int dia, mes, ano;
    printf("\nInsira o dia: ");
    scanf("%d", &dia);
    printf("\nInsira o mes: ");
    scanf("%d", &mes);
    printf("\nInsira o ano: ");
    scanf("%d", &ano);
    printf("quantidade de aulas de laboratorio ate o final do semestre: %d\n", diasDeAula(dia, mes, ano));
    return 0;
}
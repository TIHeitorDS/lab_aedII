#include <stdio.h>

typedef struct diasHoje
{
    int dia;
    int mes;
    int ano;
} DiasHoje;

typedef struct fimSemestre
{
    int dia;
    int mes;
    int ano;
} FimSemestre;

typedef enum meses
{
    zero,
    janeiro,
    fevereiro,
    marco,
    abril,
    maio,
    junho,
    julho,
    agosto,
    setembro,
    outubro,
    novembro,
    dezembro
} Meses;

DiasHoje diasHoje;
FimSemestre fimSemestre;

int diasMeses(int mes)
{
    int dias = 0;
    Meses meses;
    switch (mes)
    {
    case janeiro:
        dias = 30;
        break;
    case fevereiro:
        dias = 28;
        break;
    case marco:
        dias = 31;
        break;
    case abril:
        dias = 30;
        break;
    case maio:
        dias = 31;
        break;
    case junho:
        dias = 30;
        break;
    case julho:
        dias = 31;
        break;
    case agosto:
        dias = 31;
        break;
    case setembro:
        dias = 30;
        break;
    case outubro:
        dias = 31;
        break;
    case novembro:
        dias = 30;
        break;
    case dezembro:
        dias = 31;
        break;
    default:
        break;
    }

    return dias;
}

int semanasAula(DiasHoje diasHoje, FimSemestre fimSemestre)
{
    int semanas = 0, diaAux = diasHoje.dia;
    FimSemestre aux;
    int maxDiasMes;

    if (diasHoje.ano < fimSemestre.ano)
    {
        aux = fimSemestre;
        fimSemestre.mes = diasHoje.mes;
    }
    for (int mes = diasHoje.mes; mes <= fimSemestre.mes; mes++)
    {
        maxDiasMes = diasMeses(mes);

        for (int dias = diaAux; dias <= maxDiasMes; dias++)
        {
            diaAux++;
            if (diaAux % 7 == 0) // Usar módulo 7 para verificar a cada 7 dias
            {
                semanas++;
                diaAux = 0;
            }
        }
        if (diasHoje.mes == fimSemestre.mes && diasHoje.ano != fimSemestre.ano)
        {
            diasHoje.mes = 1;
            diasHoje.ano = fimSemestre.ano;
            fimSemestre.mes = aux.mes;
        }
    }

    return semanas;
}

void diasDeAula(int dia, int mes, int ano, int diaFinal, int mesFinal, int anoFinal)
{
    int qntAulas;
    printf("\ninforme a quantidade de aulas por semana: ");
    scanf("%d", &qntAulas);
    diasHoje.dia = dia;
    diasHoje.mes = mes;
    diasHoje.ano = ano;
    fimSemestre.dia = diaFinal;
    fimSemestre.mes = mesFinal;
    fimSemestre.ano = anoFinal;
    int semanas = semanasAula(diasHoje, fimSemestre);
    qntAulas *= semanas;

    printf("quantidade de aulas ate o fim: %d", qntAulas);
}

int main()
{
    int dia, mes, ano;
    int diaFinal, mesFinal, anoFinal;
    printf("informe o dia de hoje (dd/mm/aaaa)\n");
    printf("dia: ");
    scanf("%d", &dia);
    printf("mes: ");
    scanf("%d", &mes);
    printf("ano: ");
    scanf("%d", &ano);

    printf("\ninforme o termino do semestre (dd/mm/aaaa)\n");
    printf("dia: ");
    scanf("%d", &diaFinal);
    printf("mes: ");
    scanf("%d", &mesFinal);
    printf("ano: ");
    scanf("%d", &anoFinal);

    diasDeAula(dia, mes, ano, diaFinal, mesFinal, anoFinal);
    return 0;
}
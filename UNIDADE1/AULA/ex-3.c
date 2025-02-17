#include<stdio.h>

typedef enum dias_semana{
    SEGUNDA=2,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
}DiaSemana;

typedef enum mes{
    JANEIRO=1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
}Mes;

int main(){
    DiaSemana dia;
    Mes mes;
    printf("informe o dia da semana: 2 - 8 (seg-dom)\n");
    scanf("%d", &dia);
    printf("informe o mes: 1 - 12 (jan-dez)\n");
    scanf("%d", &mes);
    switch (dia){
    case SEGUNDA:
        printf(" Segunda-feira \\");
        break;
    case TERCA:
        printf(" Terça-feira \\");
        break;
    case QUARTA:
        printf(" Quarta-feira \\");
        break;
    case QUINTA:
        printf(" Quinta-feira \\");
        break;
    case SEXTA:
        printf(" Sexta-feira \\");
        break;
    case SABADO:
        printf(" Sabado \\");
        break;
    case DOMINGO:
        printf(" Domingo \\");
        break;
    default:
        printf(" Dia nao cadastrado! \\");
        break;
    }
    
    switch (mes){
    case JANEIRO:
        printf(" Janeiro\n");
        break;
    case FEVEREIRO:
        printf(" Fevereiro\n");
        break;
    case MARCO:
        printf(" Março\n");
        break;
    case ABRIL:
        printf(" Abril\n");
        break;
    case MAIO:
        printf(" Maio\n");
        break;
    case JUNHO:
        printf(" Junho\n");
        break;
    case JULHO:
        printf(" Julho\n");
        break;
    case AGOSTO:
        printf(" Agosto\n");
        break;
    case SETEMBRO:
        printf(" Setembro\n");
        break;
    case OUTUBRO:
        printf(" Outubro\n");
        break;
    case NOVEMBRO:
        printf(" Novembro\n");
        break;
    case DEZEMBRO:
        printf(" Dezembro\n");
        break;
    default:
        printf("Mes nao cadastrado!\n");
        break;
    }
    printf("===================\n");
    printf("Dia da semana: %d\t\n Mes: %d\t\n", dia, mes);
    return 0;
}
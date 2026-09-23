#include <stdio.h>
#include <stdlib.h>

int opcao;
float n1, n2, n3, n4, media;
char nome[], sn;

void sistema()
{
    printf("\n==================\n");
    printf("  SISTEMA ESCOLAR  \n");
    printf("==================\n");

    printf("\n1-Fazer cadastro do aluno\n");
    printf("2-Exibir boletim do aluno\n");
    printf("0-Fechar sistema\n");
    
    printf("\nQual opção desejas escolher? "); scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    cadastro();
    break;
    
    case 2:
    boletim();
    break;
    }
}

int cadastro()
{
    
    printf("\n==================\n");
    printf("     CADASTRO      \n");
    printf("==================\n");

    printf("\nInsira o nome do aluno: "); scanf("%s", nome);

    printf("\nInsira nota da 1° avaliação: "); scanf("%f", &n1);
    printf("Insira nota da 2° avaliação: "); scanf("%f", &n2);
    printf("Insira nota da 3° avaliação: "); scanf("%f", &n3);
    printf("Insira nota da 4° avaliação: "); scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf("Desejas voltar ao menu? "); scanf(" %c", &sn);

    if(sn == 's')
    {
        sistema();
    }
    else
    {
        printf("Sistema encerrado.");
    }
}

int boletim()
{
    printf("\n==================\n");
    printf("      BOLETIM      \n");
    printf("==================\n");

    printf


}


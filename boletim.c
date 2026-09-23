#include <stdio.h>
#include <stdlib.h>

int opcao;
float n1, n2, n3, n4, media;
char nome[], sn, sn2;

FILE *boletins;

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
    
    // fopen("boletins.txt", "a");

    // if(boletins == NULL)
    // {
    //     printf("\n\nAAAAAAAAA\n\n");
    // }
    
    // int debug = 2;
    // fprintf(boletins, "\n\n%d\n\n", &debug);
    
    printf("\n==================\n");
    printf("     CADASTRO      \n");
    printf("==================\n");

    printf("\nInsira o nome do aluno: "); scanf("%s", nome);

    printf("\nInsira nota da 1° avaliação: "); 
    scanf("%f", &n1); 
   
    printf("Insira nota da 2° avaliação: "); 
    scanf("%2f", &n2);
    fprintf(boletins, "N2: %f", n2);
   
    printf("Insira nota da 3° avaliação: "); 
    scanf("%f", &n3);
   
    printf("Insira nota da 4° avaliação: "); 
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;
   
    printf("\n\nDesejas cadastrar outro aluno? "); scanf(" %c", &sn);

    if(sn == 's')
    {
        cadastro();
    }
    else
    {
        printf("\n\nDesejas voltar ao menu? "); scanf(" %c", &sn2);
    
        if(sn == 's')
        {
            sistema();
        }
        else
        {
            printf("Sistema encerrado.");
        }    
    }

}

int boletim()
{
    printf("\n==================\n");
    printf("      BOLETIM      \n");
    printf("==================\n");

    printf("\nAluno: %s", nome);
    printf("\nNota do aluno na 1° avaliação: %f", n1);
    printf("\nNota do aluno na 2° avaliação: %f", n2);
    printf("\nNota do aluno na 3° avaliação: %f", n3);
    printf("\nNota do aluno na 4° avaliação: %f", n4);
    
     if(media>=7.0)
    {
        printf("\nMédia: %f, Aluno APROVADO.", media);
    }
    else
    {
        if (media>=5.0)
        {
            printf("\nMédia: %f, Aluno sob RECUPERAÇÃO.", media);
        }
        
        else
        {
            printf("\nMédia: %f, Aluno REPROVADO.", media);
        }
    }

    printf("\n\nDesejas cadastrar outro aluno? "); scanf(" %c", &sn);

    if(sn == 's')
    {
        cadastro();
    }
    else
    {
        printf("\n\nDesejas voltar ao menu? "); scanf(" %c", &sn2);
    
        if(sn == 's')
        {
            sistema();
        }
        else
        {
            printf("Sistema encerrado.");
        }    
    }

}


#include <stdio.h>
    int main (){
        char Estado1, Estado2;
        char CodigoDaCarta1[4],CodigoDaCarta2[4];
        char NomeDaCidade1[20], NomeDaCidade2[20];
        int Populacao1, Populacao2;
        float Area1, Area2;
        float PIB1, PIB2;
        int PontosTuristicos1, PontosTuristicos2;

        printf("\n--- CADASTRAMENTO DE CARTAS ---\n");

            printf("\n A seguir será realizado o cadastramento da CARTA 1\n");

                printf("\n Escolha uma Letra de 'A' a 'H' para representar um dos 8 Estados: ");
                scanf(" %c", &Estado1);
        
                printf("\n Escolha um Código para esta carta. Este código, deverá conter 3 digitos, sendo o primeiro digito a letra que você escolheu para representar o estado da carta, seguido de um número de 01 a 04 (ex: A01, B03, ...): ");
                scanf("%s",CodigoDaCarta1);

                printf("\n Escolha o nome da cidade: ");
                scanf("%s", NomeDaCidade1);

                printf("\n Escolha o número de Habitantes desta Cidade: ");
                scanf("%i", &Populacao1);

                printf("\n Escolha a Extensão Territórial da Cidade (Área da cidade em quilometros quadrados [Km²]): ");
                scanf("%f", &Area1);

                printf("\n Escolha um PIB (Produto Interno Bruto) para esta Cidade: ");
                scanf("%f", &PIB1);

                printf("\n Escolha o número de pontos turísticos que esta cidade possui: ");
                scanf("%i", &PontosTuristicos1);

            printf("\n A seguir será realizado o cadastramento da CARTA 2\n");

                printf("\n Escolha uma Letra de 'A' a 'H' para representar um dos 8 Estados: ");
                scanf(" %c", &Estado2);
                
                printf("\n Escolha um Código para esta carta. Este código, deverá conter 3 digitos, sendo o primeiro digito a letra que você escolheu para representar o estado da carta, seguido de um número de 01 a 04 (ex: A01, B03, ...): ");
                scanf("%s",CodigoDaCarta2);

                printf("\n Escolha o nome da cidade: ");
                scanf("%s", NomeDaCidade2);

                printf("\n Escolha o número de Habitantes desta Cidade: ");
                scanf("%i", &Populacao2);

                printf("\n Escolha a Extensão Territórial da Cidade (Área da cidade em quilometros quadrados [Km²]): ");
                scanf("%f", &Area2);

                printf("\n Escolha um PIB (Produto Interno Bruto) para esta Cidade: ");
                scanf("%f", &PIB2);

                printf("\n Escolha o número de pontos turísticos que esta cidade possui: ");
                scanf("%i", &PontosTuristicos2);

        printf("\n AS CARTAS FORAM CADASTRADAS COM SUCESSO\n");

            printf("\n ---CARTA 1---\n");
                printf("Estado: %c\n",Estado1);
                printf("Código: %s\n",CodigoDaCarta1);
                printf("Nome da Cidade: %s\n", NomeDaCidade1);
                printf("População: %i\n", Populacao1);
                printf("Área: %.2f Km²\n", Area1);
                printf("PIB: %.2f\n", PIB1);
                printf("Número de Pontos Turísticos: %i\n", PontosTuristicos1);

            printf("\n ---CARTA 2---\n");
                printf("Estado: %c\n",Estado2);
                printf("Código: %s\n",CodigoDaCarta2);
                printf("Nome da Cidade: %s\n", NomeDaCidade2);
                printf("População: %i\n", Populacao2);
                printf("Área: %.2f Km²\n", Area2);
                printf("PIB: %.2f\n", PIB2);
                printf("Número de Pontos Turísticos: %i\n", PontosTuristicos2);

        return 0;

    }
    
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Primeira Carta
    printf ("Carta 1 :\n");

    char Estado;
    char cg [10];
    char  Cidade [40];
    unsigned int Pop;
    float area;
    float PIB;
    int N;
    // Segunda Carta

    char Estado2[10];
    char cg2 [10];
    char  Cidade2 [40];
    unsigned int Pop2;
    float area2;
    float PIB2;
    int N2;

    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    printf("Digite seu Estado 1:\n");
    scanf("%c", &Estado);
    
    printf("Digite o Código 1:\n");
    scanf ("%s" , &cg);
    
    printf("Nome da Cidade 1:\n");
    scanf("%s", &Cidade);
    
    printf("Número de habitantes da Cidade 1:\n");
    scanf("%u", &Pop);
    
    printf("Área da Cidade 1:\n");
    scanf("%f", &area);
    
    printf("Produto interno Bruto 1:\n");
    scanf("%f", &PIB);
    
    printf("Pontos Turísticos 1:\n");
    scanf("%d",&N);
    // Calculo que irá aparecer na tela, Carta 1
    printf("Estado 1 : %c\n", Estado);
    
    printf("Código 1: %s\n", cg);
    
    printf("Nome da Cidade 1: %s\n", Cidade);
    
    printf("População 1: %u\n", Pop);
    
    printf("Área 1: %f\n", area);
    
    printf("PIB 1: %f\n", PIB);
    
    printf("Pontos Turísticos 1: %d\n", N);
    // dados da segunda carta
    printf ("Carta 2:\n");
    printf("Digite seu Estado 2:\n");
    scanf("%s", &Estado2);
    
    printf("Digite o Código 2:\n");
    scanf ("%s" , &cg2);
    
    printf("Nome da Cidade 2:\n");
    scanf("%s", &Cidade2);
    
    printf("Número de habitantes da Cidade 2:\n");
    scanf("%u", &Pop2);
    
    printf("Área da Cidade 2:\n");
    scanf("%f", &area2);
    
    printf("Produto interno Bruto 2:\n");
    scanf("%f", &PIB2);
    
    printf("Pontos Turísticos 2:\n");
    scanf("%d",&N2);
    //Calculo que irá aparecer na tela Carta 2
    printf("Estado 2 : %c\n", Estado2);
    
    printf("Código 2: %s\n", cg2);
    
    printf("Nome da Cidade 2: %s\n", Cidade2);
    
    printf("População 2: %u\n", Pop2);
    
    printf("Área 2: %f\n", area2);
    
    printf("PIB 2: %f\n", PIB2);
    
    printf("Pontos Turísticos 2: %d\n", N2);
    //Calculo da densidade / Pib per capta + super poder 1 carta
    float densidade = Pop/ area;
    float pib = PIB / Pop;

    printf("Densidade Populacional 1 :  %f\n",densidade);
    printf("PIB PER CAPTA 1 : %f\n", pib); 
  
    unsigned int supera = pib + PIB + Pop + area + N;
    printf("Super Poder A : %u\n", supera);
    // CAlculo densidade/ pib per capta + super poder 2 carta
    float densidade2 = Pop2/ area2;
    float pib2 = PIB2 / Pop2;

    printf("Densidade Populacional 2 :  %f\n",densidade2);
    printf("PIB PER CAPTA 2: %f\n", pib2);

    unsigned int superb = pib2 + PIB2 + Pop2 + area2 + N2;
    printf("Super Poder B : %u\n", superb);
    
    // Comparação de Cartas:
    // utilizando os padroes if e else
    if (Pop > Pop2){
    printf("População 1 Vencedor\n");
    } else {
     printf("População 1 Vencedor\n");
    }
    if (area > area2){
        printf("Área 1 Vencedor\n");
        } else {
         printf("Área 2 Vencedor\n");
        }
        if (pib > pib2){
            printf("Pib per capta 1 Vencedor");
            } else {
             printf("Pib per capta 2 Vencedor\n");
            }
            if (PIB > PIB2){
                printf("PIB 1 Vencedor\n");
                } else {
                 printf("PIB 2 Vencedor\n");
                }
                if (N > N2){
                    printf("Pontos turísticos 1 Vencedor\n");
                    } else {
                     printf("Pontos turísticos 2 Vencedor\n");
                    }
                    if (densidade > densidade2){
                        printf("Densidade 2 Vencedor\n");
                        } else {
                         printf("Densidade 1 Vencedor\n");
                        }  
                        if (supera > superb){
                            printf("Super Poder 1 Vencedor\n");
                            } else {
                             printf("Super Poder 2 Vencedor\n");
                            }

return 0;

        /* code */
    
  
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    /* code */
}

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);



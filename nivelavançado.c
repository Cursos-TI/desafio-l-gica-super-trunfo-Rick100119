#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // início do jogo 
printf("Bem vindo ao Jogo\n");
printf(" Defina as numeração das Cartas, Boa sorte.\n");
       // Definição das variáveis para armazenar as propriedades das cidades
    // Primeira Carta
    printf ("Carta 1 :\n");
    char Estado[10]="A"; 
    char cg [10]="A01";
    char  Cidade [40]=" São Paulo";
    unsigned int Pop =12325000;
    float area =1521.11 ;
    float PIB = 699.28;
    int N= 50 ;
     //Calculo da densidade / Pib per capta + super poder 1 carta
     float densidade = Pop/ area;
     float pib = PIB / Pop;
    // Segunda Carta

    char Estado2[10]="B" ;
    char cg2 [10] = "B02",atributo, atributo2;
    char  Cidade2 [40]="Rio De Janeiro";
    unsigned int Pop2 =  6748000;
    float area2= 1200.25;
    float PIB2 =300.50;
    int N2= 30, resultado, resultado2;
     // CAlculo densidade/ pib per capta + super poder 2 carta
     float densidade2 = Pop2/ area2;
     float pib2 = PIB2 / Pop2;
    // Escolha dos atributos
printf (" Escolha o primeiro atributo\n");
printf ("1- População\n");
printf ("2-Área\n");
printf ("3- PIB\n");
printf ("4- Pib per capta\n");
printf ("5-Pontos turisticos\n");
printf ("6- Densidade\n");
 scanf("%u", &atributo); 

// aplicando o swict
switch (atributo)
{
case 1 :
printf ("População: %u\n", Pop);
resultado = Pop > Pop2 ? 1 : 0;
break;  
case 2:
printf ("Área :%f\n", area);
resultado = area > area2 ? 1:0;
break;
case 3:
printf ("PIB : %f\n", PIB);
resultado = PIB > PIB2 ? 1 : 0;
break;
case 4:
printf ("Pib per capta: %f\n", pib);
resultado = pib > pib2 ? 1:0;
break;  
case 5:
printf ("Pontos turisticos: %d\n", N);
resultado = N > N2? 1 : 0;
break;
case 6:
printf ("DENSIDADE :%f\n",densidade);
resultado = densidade < densidade2 ? 1:0;
break;

default :
printf("Opção inválida ");
break;
}
printf (" Escolha o segundo atributo\n");
printf ("1- População\n");
printf (" 2-Área\n");
printf ("3- PIB\n");
printf ("4- Pib per capta\n");
printf ("5-Pontos turisticos\n");
printf ("6- Densidade\n");
 scanf("%u", &atributo2);
 switch (atributo2)
 {
  case 1 :
  printf ("População: %u\n", Pop);
  resultado2 = Pop > Pop2 ? 1 : 0;
  break;  
  case 2:
  printf ("Área :%f\n", area);
  resultado2 = area > area2 ? 1:0;
  break;
  case 3:
  printf ("PIB : %f\n", PIB);
  resultado2 = PIB > PIB2 ? 1 : 0;
  break;
  case 4:
  printf ("Pib per capta: %f\n", pib);
  resultado2 = pib > pib2 ? 1:0;
  break;  
  case 5:
  printf ("Pontos turisticos: %d\n", N);
  resultado2 = N > N2? 1 : 0;
  break;
  case 6:
  printf ("DENSIDADE :%f\n",densidade);
  resultado2 = densidade < densidade2 ? 1:0;
  break;
}
// implementando o e se
if (atributo == atributo2) {
  printf("Não pode escolher a mesma opção.");
  } else if (resultado==1, resultado2==1)
  {
    printf("Parabéns, Voçê Vençeu ");
  }  else if (resultado != resultado2)
  {
    printf("EMPATE");
  }else
  
  {
    printf("GAME OVER");
  }
  
  return 0;
}
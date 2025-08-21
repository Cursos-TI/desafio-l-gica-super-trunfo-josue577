#include <stdio.h>

int main() {
   char estado1;
   char codigo1[4], nome1[50];
   int pturistico1, opcao;
   unsigned long int populacao1, populacao2;
   float area1, pib1, pibpc1, dp1, superpoder1;
   char estado2;
   char codigo2[4], nome2[50];
   int pturistico2;
   float area2, pib2, pibpc2, dp2, superpoder2;

   printf("Digite uma letra para seu estado: \n");
   scanf(" %c", &estado1);

   printf("Digite um codigo para sua carta: \n");
   scanf("%s", codigo1);

   printf("Digite um nome para sua carta: \n");
   scanf("%s", nome1);

   printf("Digite o numero da populacao: \n");
   scanf("%lu", &populacao1);

   printf("Digite a area da cidade: \n");
   scanf("%f", &area1);

   printf("Digite o PIB: \n");
   scanf("%f", &pib1);

   printf("Digite o numero de pontos turisticos: \n");
   scanf("%d", &pturistico1);

   printf("\nAgora para a carta 2:\n");
   printf("Digite uma letra para seu estado: \n");
   scanf(" %c", &estado2);

   printf("Digite um codigo para sua carta: \n");
   scanf("%s", codigo2);

   printf("Digite um nome para sua carta: \n");
   scanf("%s", nome2);

   printf("Digite o numero da populacao: \n");
   scanf("%lu", &populacao2);

   printf("Digite a area da cidade: \n");
   scanf("%f", &area2);

   printf("Digite o PIB: \n");
   scanf("%f", &pib2);

   printf("Digite o numero de pontos turisticos: \n");
   scanf("%d", &pturistico2);

   dp1 = (float) populacao1 / area1;
   dp2 = (float) populacao2 / area2;

   printf("\nEscolha a metrica para comparar:\n");
   printf("1. Populacao\n");
   printf("2. Area\n");
   printf("3. PIB\n");
   printf("4. Pontos Turisticos\n");
   printf("5. Densidade Populacional\n");
   scanf("%d", &opcao);

   switch (opcao) {
   case 1:
       printf("\nComparacao de cartas (Populacao):\n");
       printf("Carta 1 - %s (%c): %lu\n", nome1, estado1, populacao1);
       printf("Carta 2 - %s (%c): %lu\n", nome2, estado2, populacao2);
       if (populacao1 > populacao2)
           printf("Cidade 1 tem maior populacao.\n");
       else
           printf("Cidade 2 tem maior populacao.\n");
       break;
   case 2:
       printf("\nComparacao de cartas (Area):\n");
       printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, area1);
       printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, area2);
       if (area1 > area2)
           printf("Cidade 1 tem maior area.\n");
       else
           printf("Cidade 2 tem maior area.\n");
       break;
   case 3:
       printf("\nComparacao de cartas (PIB):\n");
       printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, pib1);
       printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, pib2);
       if (pib1 > pib2)
           printf("Cidade 1 tem maior PIB.\n");
       else
           printf("Cidade 2 tem maior PIB.\n");
       break;
   case 4:
       printf("\nComparacao de cartas (Pontos Turisticos):\n");
       printf("Carta 1 - %s (%c): %d\n", nome1, estado1, pturistico1);
       printf("Carta 2 - %s (%c): %d\n", nome2, estado2, pturistico2);
       if (pturistico1 > pturistico2)
           printf("Cidade 1 tem mais pontos turisticos.\n");
       else
           printf("Cidade 2 tem mais pontos turisticos.\n");
       break;
   case 5:
       printf("\nComparacao de cartas (Densidade Populacional):\n");
       printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, dp1);
       printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, dp2);
       if (dp1 < dp2)
           printf("Cidade 1 tem menor densidade populacional.\n");
       else
           printf("Cidade 2 tem menor densidade populacional.\n");
       break;
   default:
       printf("\nOpcao invalida.\n");
   }

   return 0;
}

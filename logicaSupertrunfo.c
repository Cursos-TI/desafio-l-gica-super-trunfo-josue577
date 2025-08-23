#include <stdio.h>

int main() {
   char estado1;
   char codigo1[4], nome1[50];
   int pturistico1, opcao1, opcao2;
   unsigned long int populacao1, populacao2;
   float area1, pib1, dp1;
   char estado2;
   char codigo2[4], nome2[50];
   int pturistico2;
   float area2, pib2, dp2;
   int pontosCidade1 = 0, pontosCidade2 = 0;

   printf("Digite uma letra para seu estado: \n");
   scanf(" %c", &estado1);

   printf("Digite um codigo para sua carta: \n");
   scanf("%s", codigo1);

   printf("Digite um nome para sua carta: \n");
   scanf(" %[^\n]", nome1);

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
   scanf(" %[^\n]", nome2);

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

   // Escolha das métricas
   printf("\nEscolha a primeira metrica para comparar:\n");
   printf("1. Populacao\n");
   printf("2. Area\n");
   printf("3. PIB\n");
   printf("4. Pontos Turisticos\n");
   printf("5. Densidade Populacional\n");
   scanf("%d", &opcao1);

   printf("\nEscolha a segunda metrica (diferente da primeira):\n");
   scanf("%d", &opcao2);

   if (opcao1 == opcao2) {
       printf("\nErro: voce escolheu a mesma metrica duas vezes!\n");
       return 0;
   }

   // Comparação da primeira métrica
   printf("\n--- Comparacao 1 ---\n");
   if (opcao1 == 1) {
       printf("Populacao: %lu (%s) vs %lu (%s)\n", populacao1, nome1, populacao2, nome2);
       if (populacao1 > populacao2) {printf("Cidade 1 venceu\n"); pontosCidade1++;}
       else if (populacao2 > populacao1) {printf("Cidade 2 venceu\n"); pontosCidade2++;}
       else printf("Empate\n");
   }
   if (opcao1 == 2) {
       printf("Area: %.2f (%s) vs %.2f (%S)\n", area1, nome1, area2, nome2);
       if (area1 > area2) {printf("Cidade 1 venceu\n"); pontosCidade1++;}
       else if (area2 > area1) {printf("Cidade 2 venceu\n"); pontosCidade2++;}
       else printf("Empate\n");
   }
   if (opcao1 == 3) {
       printf("PIB: %.2f (%s) vs %.2f (%s)\n", pib1, nome1, pib2, nome2);
       if (pib1 > pib2) {printf("Cidade 1 venceu\n"); pontosCidade1++;}
       else if (pib2 > pib1) {printf("Cidade 2 venceu\n"); pontosCidade2++;}
       else printf("Empate\n");
   }
   if (opcao1 == 4) {
       printf("Pontos Turisticos: %d (%s) vs %d (%s)\n", pturistico1, nome1, pturistico2, nome2);
       if (pturistico1 > pturistico2) {printf("Cidade 1 venceu\n"); pontosCidade1++;}
       else if (pturistico2 > pturistico1) {printf("Cidade 2 venceu\n"); pontosCidade2++;}
       else printf("Empate\n");
   }
   if (opcao1 == 5) {
       printf("Densidade Populacional: %.2f (%s) vs %.2f (%s)\n", dp1, nome1, dp2, nome2);
       if (dp1 < dp2) {printf("Cidade 1 venceu (menor densidade)\n"); pontosCidade1++;}
       else if (dp2 < dp1) {printf("Cidade 2 venceu (menor densidade)\n"); pontosCidade2++;}
       else printf("Empate\n");
   }

   // Comparação da segunda métrica
   printf("\n--- Comparacao 2 ---\n");
   if (opcao2 == 1) {
       printf("Populacao: %lu (%s) vs %lu (%s)\n", populacao1, nome1, populacao2, nome2);
       if (populacao1 > populacao2) {printf("Cidade 1 venceu\n"); pontosCidade1++;}
       else if (populacao2 > populacao1) {printf("Cidade 2 venceu\n"); pontosCidade2++;}
       else printf("Empate\n");
   }
   if (opcao2 == 2) {
       printf("Area: %.2f (%s) vs %.2f (%s)\n", area1, nome1, area2, nome2);
       if (area1 > area2) {printf("Cidade 1 venceu\n"); pontosCidade1++;}
       else if (area2 > area1) {printf("Cidade 2 venceu\n"); pontosCidade2++;}
       else printf("Empate\n");
   }
   if (opcao2 == 3) {
       printf("PIB: %.2f (%s) vs %.2f (%s)\n", pib1, nome1, pib2, nome2);
       if (pib1 > pib2) {printf("Cidade 1 venceu\n"); pontosCidade1++;}
       else if (pib2 > pib1) {printf("Cidade 2 venceu\n"); pontosCidade2++;}
       else printf("Empate\n");
   }
   if (opcao2 == 4) {
       printf("Pontos Turisticos: %d (%s) vs %d (%s)\n", pturistico1, nome1, pturistico2, nome2);
       if (pturistico1 > pturistico2) {printf("Cidade 1 venceu\n"); pontosCidade1++;}
       else if (pturistico2 > pturistico1) {printf("Cidade 2 venceu\n"); pontosCidade2++;}
       else printf("Empate\n");
   }
   if (opcao2 == 5) {
       printf("Densidade Populacional: %.2f (%s) vs %.2f (%s)\n", dp1, nome1, dp2, nome2);
       if (dp1 < dp2) {printf("Cidade 1 venceu (menor densidade)\n"); pontosCidade1++;}
       else if (dp2 < dp1) {printf("Cidade 2 venceu (menor densidade)\n"); pontosCidade2++;}
       else printf("Empate\n");
   }

   // Resultado final
   printf("\n===== Resultado Final =====\n");
   printf("Cidade 1: %d pontos\n", pontosCidade1);
   printf("Cidade 2: %d pontos\n", pontosCidade2);

   if (pontosCidade1 > pontosCidade2) printf("%s venceu no geral!\n", nome1);
   else if (pontosCidade2 > pontosCidade1) printf("%s venceu no geral!\n", nome2);
   else printf("Empate geral!\n");

   return 0;
}
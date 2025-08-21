#include <stdio.h>


int main() {
   char estado1 ,codigo1[4] ,nome1[50];
   int pturistico1;
   unsigned long int populacao1 , populacao2;
   float area1, pib1, pibpc1, dp1, superpoder1;
   char estado2[4] ,codigo2[4] ,nome2[50];
   int pturistico2;
   float area2, pib2, pibpc2, dp2, superpoder2;

    
   printf ("digite uma letra para seu estado: \n");
   scanf ("%c", &estado1);

   printf ("digite um codigo para sua carta: \n");
   scanf ("%s", codigo1);
    
   printf ("digite um nome para sua carta: \n");
   scanf ("%s", nome1);

   printf ("digite o numero da população: \n");
   scanf ("%u", &populacao1);

   printf ("digite a area da cidade: \n");
   scanf ("%f", &area1);

   printf ("digite o pib: \n");
   scanf ("%f", &pib1);

   printf ("digite o numero de pontos turisticos: \n");
   scanf ("%d", &pturistico1);

   printf ("agora para a carta 2 digite uma letra para seu estado: \n");
   scanf ("%s", estado2);

   printf ("digite um codigo para sua carta: \n");
   scanf ("%s", codigo2);
    
   printf ("digite um nome para sua carta: \n");
   scanf ("%s", nome2);

   printf ("digite o numero da população: \n");
   scanf ("%u", &populacao2);

   printf ("digite a area da cidade: \n");
   scanf ("%f", &area2);

   printf ("digite o pib: \n");
   scanf ("%f", &pib2);

   printf ("digite o numero de pontos turisticos: \n");
   scanf ("%d", &pturistico2);

   dp1 = (float) area1 / populacao1;
   pibpc1 = (float) pib1 / populacao1;
   superpoder1 = (float) area1 + pib1 + populacao1 + pturistico1 + pibpc1 - dp1;

   dp2 = (float) area2 / populacao2;
   pibpc2 = (float) pib2 / populacao2;
   superpoder2 = (float) area2 + pib2 + populacao2 + pturistico2 + pibpc2 - dp2;

  
   printf ("Comparação de cartas (Atributo: População):\n");
   printf ("carta 1-%s (%c):%u\n", nome1, estado1, populacao1);
   printf ("carta 2-%s (%c):%u\n", nome2, estado2, populacao2);

   if (populacao1 > populacao2) {
       printf("Cidade 1 tem maior população.\n");
   } else {
       printf("Cidade 2 tem maior população.\n");
   }

   printf ("Comparação de cartas (Atributo: Área):\n");
   printf ("carta 1-%s (%c):%.2f\n", nome1, estado1, area1);
   printf ("carta 2-%s (%c):%.2f\n", nome2, estado2, area2);

   if (area1 > area2) {
       printf("Cidade 1 tem a maior área.\n");
   } else {
       printf("Cidade 2 tem a maior área.\n");
   }

   printf ("Comparação de cartas (Atributo: PIB):\n");
   printf ("carta 1-%s (%c):%.2f\n", nome1, estado1, pib1);
   printf ("carta 2-%s (%c):%.2f\n", nome2, estado2, pib2);

   if (pib1 > pib2) {
       printf("Cidade 1 tem o maior PIB.\n");
   } else {
       printf("Cidade 2 tem o maior PIB.\n");
   }

   printf ("Comparação de cartas (Atributo: Pontos Túristicos):\n");
   printf ("carta 1-%s (%c):%d\n", nome1, estado1, pturistico1);
   printf ("carta 2-%s (%c):%d\n", nome2, estado2, pturistico2);

   if (pturistico1 > pturistico2) {
       printf("Cidade 1 tem maior número de pontos turísticos.\n");
   } else {
       printf("Cidade 2 tem maior número de pontos turísticos.\n");
   }

   printf ("Comparação de cartas (Atributo: Dencidade Populacional):\n");
   printf ("carta 1-%s (%c):%.2f\n", nome1, estado1, dp1);
   printf ("carta 2-%s (%c):%.2f\n", nome2, estado2, dp2);

   if (dp1 < dp2) {
       printf("Cidade 1 tem menor densidade Populacional.\n");
   } else {
       printf("Cidade 2 tem menor densidade Populacional.\n");
   }

   printf ("Comparação de cartas (Atributo: PIB per capita):\n");
   printf ("carta 1-%s (%c):%.2f\n", nome1, estado1, pibpc1);
   printf ("carta 2-%s (%c):%.2f\n", nome2, estado2, pibpc2);

   if (pibpc1 > pibpc2) {
       printf("Cidade 1 tem maior PIB per capita.\n");
   } else {
       printf("Cidade 2 tem maior PIB per capita.\n");
   }

   if (superpoder1 > superpoder2) {
       printf("A cidade vencedora é: %s.\n", nome1);
   } else { 
       printf("A cidade vencedora é: %s.\n", nome2);
   }
    

    return 0;
}

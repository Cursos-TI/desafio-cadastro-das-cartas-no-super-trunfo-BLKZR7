#include <stdio.h>
         

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Thalyson

int main() {

    int populacao;
    float area;
    float PIB;
    int numeros_de_pontos_turisticos;

    printf("CARTAS SUPER TRUNFO\n");

     printf("Qual a população da sua cidade?: \n");
     scanf("%d", &populacao);

     printf("Qual a Area da Sua cidade?: \n");
     scanf("%f", &area);

     printf("Qual o PIB da sua Cidade?: \n");
     scanf("%f", &PIB);

     printf("Qual o numeros de pontos turisticos?: \n");
     scanf("%d", &numeros_de_pontos_turisticos);

    printf("A população da sua cidade é: %d \n", populacao);
    printf("A área da sua cidade é: %f \n", area);
    printf("O PIB da sua cidade é: %f \n", PIB);
    printf("Numeros de pontos turisticos: %d \n", numeros_de_pontos_turisticos);
         
    return 0;


}

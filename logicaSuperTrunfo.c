#include <stdio.h>
#include <string.h> 
typedef struct { char nome[50];
int populacao; // em milhares 
float area; // em km²
float idh; // Índice de Desenvolvimento Humano } 
Cidade;
int main() { // Definição das cidades 
    Cidade cidade1 = {"Recife", 50000, 300.0, 0.557}; 
    Cidade cidade2 = {"Olinda", 20000, 150.0, 0.546}; 
int escolha; printf("Bem-vindo ao Super Trunfo de Cidades!\n");
printf("Escolha o atributo para comparar:\n"); 
printf("1 - População\n"); 
printf("2 - Área\n");
printf("3 - IDH\n"); 
printf("Digite sua escolha: "); 
scanf("%d", &escolha); 
// Comparação com base na escolha 
if (escolha == 1) { 
    printf("\nComparando População...\n"); 
    if (cidade1.populacao > cidade2.populacao) { 
    printf("Vencedor: %s (População: %d mil)\n", cidade1.nome, cidade1.populacao); } 
    else if (cidade1.populacao < cidade2.populacao) { 
    printf("Vencedor: %s (População: %d mil)\n", cidade2.nome, cidade2.populacao); } 
    else { printf("Empate! Ambas têm a mesma população.\n"); } } 
    else if (escolha == 2) { printf("\nComparando Área...\n");                     
    if (cidade1.area > cidade2.area) { printf("Vencedor: %s (Área: %.2f km²)\n", cidade1.nome, cidade1.area); } 
    else if (cidade1.area < cidade2.area) { printf("Vencedor: %s (Área: %.2f km²)\n", cidade2.nome, cidade2.area); } 
    else { printf("Empate! Ambas têm a mesma área.\n"); } } 
    else if (escolha == 3) { printf("\nComparando IDH...\n"); 
    if (cidade1.idh > cidade2.idh) { printf("Vencedor: %s (IDH: %.3f)\n", cidade1.nome, cidade1.idh); } 
    else if (cidade1.idh < cidade2.idh) { printf("Vencedor: %s (IDH: %.3f)\n", cidade2.nome, cidade2.idh); } 
    else { printf("Empate! Ambas têm o mesmo IDH.\n"); } } 
    else { printf("Opção inválida! Tente novamente.\n"); } 
    return 0; }

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n1, n2, soma = 0,subt = 0;
    int mult = 0, divi = 0;
    // entrada de dados
    printf("Digite um numero inteiro :");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro :");
    scanf("%d", &n2);
    //processamento
    soma = n1 + n2;
    subt = n1 - n2;
    mult = n1 * n2;
    divi = n1 / n2;
    // saida de dados
    printf("A soma é: %d\t", soma);
    printf("\nA Subtração é: %d", subt);
    printf("\nA multiplicação é: %d", mult);
    printf("\nA divisão é: %d", divi);
    // \n pola de linha
    // \t faz uma tabulacão

    return 0;
}
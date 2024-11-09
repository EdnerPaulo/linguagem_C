// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //declarando as variaveis e atribuindo valores iniciais
    int numero;
    // entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &numero);
    // & é um endereço de memoria,para chamar a variavel
    //processamento    // saida de dados
    if(numero % 2 == 0){
        // se numero divido por dois da resto = zero
        printf("O número é Par");
    }else{
        printf("O número Impar");

    }
    
    return 0;
}
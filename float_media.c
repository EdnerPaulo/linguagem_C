// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //declarando as variaveis e atribuindo valores iniciais
    float nt_ex,nt_pr,nt_pt, media = 0;
    // nt_ex = nota do exercicios
    // nt_pr= nota da prova
    // nt_pt= nota do portfolio
    // entrada de dados
    printf("Digite a nota da Prova :");
    scanf("%f", &nt_pr);
    // & é um endereço de memoria
    printf("Digite a nota do Portfolio :");
    scanf("%f", &nt_pt);
    printf("Digite a nota do Exercicio :");
    scanf("%f", &nt_ex);
    //processamento
    media = (nt_pr * 5 + nt_pt * 3 + nt_ex * 2)/10;
    // saida de dados
    printf(" A media é : %.2f", media);
    // .2 na %.2f serve para colocar so duas casas depois da virgula
    return 0;
}
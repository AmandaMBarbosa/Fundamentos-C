//Disciplina Faculdade: Algoritmos e Programação Estruturada - 2º Semestre
//Objetivo: calcular média com base em duas entradas do usuário

//Importar biblioteca para uso do printf(saída de dados) e scanf(entrada de dados)
#include <stdio.h>

//Função principal
int main() {
    //Declaração das variáveis necessárias
    float n1, n2, media;

    //Saída que orienta o usuário
    printf("Insira um primeiro valor:");
    //Direcionar a entrada do usuário ao endereço da variável n1
    scanf("%f", &n1);

    //Saída que orienta o usuário
    printf("Insira um segundo valor:");
    //Direcionar a entrada do usuário ao endereço da variável n2
    scanf("%f", &n2);

    //Armazenar cálculo da média na variável média
    media = (n1+n2)/2;

    //Imprimir resultado na tela do usuário
    printf("Média = %.2f", media);

    //Informar andamento do programa ao usuário
    printf("\nPrograma Finalizado!");
    
    //Encerrar corretamente a função principal
    return 0;
}
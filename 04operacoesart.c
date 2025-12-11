//Disciplina Faculdade: Algoritmos e Programação Estruturada - 2º Semestre
/*Objetivo: Crie um programa em C que solicite ao usuário três números inteiros e, em seguida, execute as
seguintes operações:*/

//Carregar biblioteca stdio.h para uso das funções printf e scanf
#include <stdio.h>

//Função para executar o código
int main(){

    //Declarar tipos das variáveis
    float n1, n2, n3;
    float soma, subtracao, multiplicacao, divisao;

    //Instruir o usuário a inserir um primeiro número
    printf("Insira o primeiro número:");
    //Alocar o número inserido pelo usuário em n1
    scanf("%f", &n1);

    //Instruir o usuário a inserir um segundo número
    printf("Insira o segundo número:");
    //Alocar o número inserido pelo usuário em n2
    scanf("%f", &n2);

    //Instruir o usuário a inserir um terceiro número
    printf("Insira o terceiro número:");
    //Alocar o número inserido pelo usuário em n3
    scanf("%f", &n3);

    //Imprimir números inseridos
    printf("Número 1: %.2f\n", n1);
    printf("Número 2: %.2f\n", n2);
    printf("Número 3: %.2f\n", n3);

    //1. Calcule a soma, subtração, multiplicação e divisão dos três números.

    //Operações
    soma = n1 + n2 + n3;
    subtracao = n1 - n2 - n3;
    multiplicacao = n1 * n2 * n3;
    divisao = n1 / n2 / n3;

    //Imprimir resultados na tela
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);
    
    /*2. Verifique, utilizando operadores relacionais, se o primeiro número é maior que o segundo,
    e se o segundo é menor que o terceiro. */

    //Verificação
    printf("Primeiro número inserido é maior que o segundo? 0(Não) e 1(Sim): %d\n", (n1 > n2));
    printf("O segundo número inserido é menor que o terceiro? 0(Não) e 1(Sim): %d\n", (n2 < n3));

    /*3. Utilize operadores lógicos para verificar se o primeiro número é positivo e o segundo
    número é par. Caso ambas as condições sejam verdadeiras, o programa deverá exibir
    uma mensagem específica.*/

    /*Nesta situação, vamos precisar trabalhar com o resto da divisão, que não é compatível com números do tipo float, por isso
    é necessário converter n2 para inteiro*/
    int n2Int = n2;

    // Verificação usando operadores lógicos e fmod
    if (n1 > 0 && n2Int % 2 == 0){
        printf("O primeiro número inserido é positivo e o segundo número é par");
    }

    return 0;
}
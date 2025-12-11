//Disciplina Faculdade: Algoritmos e Programação Estruturada - 2º Semestre
//Objetivo: sistema de análise de vendas diárias

#include <stdio.h>
int main(){
    //Declarar um vetor de tamanho 5 para armazenar números inteiros
    int vendas_diarias[5];
    //Inicializar variável soma
    int soma = 0;

    //Solicitar ao usuário que insira 5 valores inteiros e armazenar esses valores no vetor
    for(int i = 0; i < 5; i++){
        printf("Insira a quantidade de vendas realizadas no %dº dia:", i+1);
        //Armazenar valores inseridos pelo usuário no vetor vendas_diarias na posição correspondente ao indixe i
        scanf("%d", &vendas_diarias[i]);
        //Realizar soma dos valores inseridos pelo usuário de acordo com o indixe correspondente
        soma = soma + vendas_diarias[i];
    }
    
    //Separar entradas das saídas
    printf("\n\n\n");

    //Estruturar relatório
    printf("=========================================\n");
    printf("RELATÓRIO VENDAS SEMANAIS\n");
    printf("=========================================\n");
    

    //Imprimir vendas na tela de acordo com o dia correspondente
    for(int i = 0; i < 5; i++){
        printf("Vendas %dº dia: %d\n", i+1, vendas_diarias[i]);
    }
    //Imprimir soma das vendas na tela
    printf("Soma total de vendas: %d", soma);
   
    return 0;
}
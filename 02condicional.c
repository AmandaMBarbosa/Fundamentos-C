//Disciplina Faculdade: Algoritmos e Programação Estruturada - 2º Semestre
//Objetivo: testar a condicional while

#include <stdio.h>
int main(){
    //inicializar variáveis
    int inteiro = 1;
    long int soma = 0;

    //Repetição: enquanto o inteiro for diferente de 0, o programa continua solicitando números ao usuário
    while(inteiro != 0){
        //Solicitar números ao usuário
        printf("\nInsira um número inteiro(0 para finalizar):");
        //Alocar número temporáriamente na variável "inteiro"
        scanf("%d", &inteiro);

        //Alocar o número na variável soma, mas somado aos demais digitados
        soma = soma + inteiro;
        
    }
    //Imprimir na tela o resultado da soma ao finalizar o loop
    printf("Soma: %ld\n", soma);
    //Informar ao usuário que o programa foi finalizado
    printf("Programa finalizado!");
    return 0;
}
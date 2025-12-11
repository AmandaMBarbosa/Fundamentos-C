//Disciplina Faculdade: Algoritmos e Programação Estruturada - 2º Semestre
//Objetivo: alocar entradas nas posições correspontes do vetor

#include <stdio.h>
int main(){
    //declarar var e vetor
    int i, numeros[5];

    //enquanto i for menor que 5 permitir que o usuário insira valores inteiros
    for(i = 0; i < 5; i++){
        //solicitar entrada
        printf("Inisira um número inteiro na posição %d:", i);
        //guardar entrada no espaço de memório destinado ao endereço indexado pelo inteiro i
        scanf("%d", &numeros[i]);
    }

    //imprimir posições e conteúdo
    for(i = 0; i < 5; i++)
        //numeros[i] é para posção, por isso não acompanha &
        printf("Posição %d: %d\n", i, numeros[i]);
    

    return 0;  
}
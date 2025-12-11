//Disciplina Faculdade: Algoritmos e Programação Estruturada - 2º Semestre
//Objetivo: testar repetição com do while

#include <stdio.h>
int main() {
    int num;

    //executar antes de verificar a condição
    do {
        printf("Insira um número (digite 0 para parar): ");
        scanf("%d", &num);
    //condição de parada
    } while (num != 0);

    printf("Programa encerrado.\n");
    return 0;
}
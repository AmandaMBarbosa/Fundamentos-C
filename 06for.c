//Disciplina Faculdade: Algoritmos e Programação Estruturada - 2º Semestre
//Objetivo: calcular potência com a estrutura de repetição for

#include <stdio.h>
int main(){
    //declaração e inicialização de variáveis
    int base;
    int expoente;
    long int res = 1;

    //entrada
    printf("Insira o valor da base:");
    //alocação
    scanf("%d", &base);

    //entrada
    printf("Insira o valor do expoente:");
    //alocação
    scanf("%d", &expoente);

    //condição para repetição
    for(int i = 0; i < expoente; i++){
            //calculo da potência
            res = res * base;
        
    }

    //imprimir resultado
    printf("%d elevado a %d= %ld", base, expoente, res);
    return 0;
}
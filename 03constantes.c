//Disciplina Faculdade: Algoritmos e Programação Estruturada - 2º Semestre
//Objetivo: testar cálculos com variáveis constantes

#include <stdio.h>
int main(){
    //Declarar variáveis e inicializar
    float precovenda = 1500;
    float imposto = precovenda * 0.1;
    float desconto = precovenda * 0.05;
    float precofinal = (precovenda + imposto) - desconto;

    //Imprimir resultado na tela do usuário
    printf("Imposto: %.2f\n", imposto);
    printf("Desconto: %.2f\n", desconto);
    printf("Preço final: %.2f", precofinal);

    return 0;
}
//Disciplina Faculdade: Algoritmos e Programação Estruturada - 2º Semestre
//Objetivo: calcular o dobro de uma variável por meio de função

#include <stdio.h>
//prototipo da função
void dobro(int x);
//função principal
int main(){
    //declarar var
    int x = 2;
    //chamar função
    dobro(x); 

    return 0;
}
//estrutura da função
void dobro(int x){
        int dobro_x = x * 2;
        printf("Dobro de X: %d", dobro_x);
    }
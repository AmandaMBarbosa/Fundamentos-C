//Disciplina Faculdade: Algoritmos e Programação Estruturada - 2º Semestre
//Objetivo: realizar o cálculo básico de salário líquido

#include <stdio.h>

//inicializar funções
float calculo_salario_bruto(float valor_hora, int hora, int dias_uteis);
float calculo_salario_desconto(float salario_bruto);
float calculo_salario_liquido(float salario_bruto, float desconto_salario);

//função principal
//entradas e saídas 
int main(){
    //declarar variáveis 
    float valor_hora;
    int hora;
    int dias_uteis;

    //formatar apresentação das solicitações de entrada
    printf("====== Cálculo: Salário Bruto ======\n");
    //solicitar ao usuário o valor da hora
    printf("Insira o valor da hora: ");
    //armazenar entrada na variável correspondente 
    scanf("%f", &valor_hora);

    //solicitar ao usuário a quantidade de horas trabalhadas
    printf("Insira a quantidade de horas trabalhadas por dia: ");
    //armazenar entrada na variável correspondente 
    scanf("%d", &hora);

    //solicitar ao usuário a quantidade de dias úteis trabalhados 
    printf("Insira a quantidade de dias úteis trabalhados: ");
    //armazenar entrada na variável correspondente 
    scanf("%d", &dias_uteis);

    //formatar apresentação da saída para o usuário
    printf("============== Cálculo Salário ==============\n");

    //chamar funções
    float salario_bruto = calculo_salario_bruto(valor_hora, hora, dias_uteis);
    float desconto = calculo_salario_desconto(salario_bruto);
    float salario_liq = calculo_salario_liquido(salario_bruto, desconto);

    return 0;
}

//função para cálculo de salário bruto
//parametros definidos pelas entradas do usuário
float calculo_salario_bruto(float valor_hora, int hora, int dias_uteis){
    //cálculo de salário bruto
    float salario_bruto = (valor_hora * hora) * dias_uteis;
    //imprimir salário assim que a função for chamada
    printf("Salário Bruto: %.2f\n", salario_bruto);
    //retornar resultado do cálculo de salário
    return salario_bruto;
}

//função para calcular porcentagem de desconto sobre o salário
float calculo_salario_desconto(float salario_bruto){
    //calculo do desconto
    float desconto_salario = salario_bruto * 0.09; // 9%
    //imprimir resultado do calculo
    printf("Desconto: %.2f\n", desconto_salario);
    //retornar desconto
    return desconto_salario;
}

//função para calcular o salário líquido
float calculo_salario_liquido(float salario_bruto, float desconto_salario){
    //calculo do salário líquido
    float salario_liquido = salario_bruto - desconto_salario;
    //imprimir resultado do calculo
    printf("Salário Líquido: %.2f\n", salario_liquido);
    //retornar salário líquido
    return salario_liquido;
}

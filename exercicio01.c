#include <stdio.h>

int main() {
    int numeroDoEmpregado, horasTrabalhadas;
    float valorPorHora, salario;

    printf("Digite seu número de empregado: ");
    scanf("%i",&numeroDoEmpregado);
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%i", &horasTrabalhadas);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorPorHora);

    salario = valorPorHora * horasTrabalhadas;

    printf("%i, %.2f", numeroDoEmpregado, salario);





    



}
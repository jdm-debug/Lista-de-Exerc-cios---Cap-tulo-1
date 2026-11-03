/* Questao 21 - Reajuste salarial por cargo */
#include <stdio.h>

int main() {
    double salario, percentual, aumento;
    int cargo;

    printf("Salario atual: ");
    scanf("%lf", &salario);
    printf("Codigo do cargo (1 = Tecnico; 2 = Gerente; 3 = Demais): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            percentual = (salario <= 3000) ? 0.15 : 0.10;
            break;
        case 2:
            percentual = (salario <= 5000) ? 0.10 : 0.05;
            break;
        case 3:
            percentual = 0.08;
            break;
        default:
            printf("Erro: codigo de cargo invalido!\n");
            return 1;
    }

    aumento = salario * percentual;

    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", salario + aumento);

    return 0;
}

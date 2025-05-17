#include <stdio.h>

int main() {
    float peso, altura, bmi;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    bmi = peso / (altura * altura);

    printf("\nSu índice de masa corporal es: %.2f\n\n", bmi);

    printf("Índice\t\tCondición\n");
    printf("-----------------------------\n");
    printf("<18.5\t\tBajo peso\n");
    printf("18.5 a 24.9\tNormal\n");
    printf("25.0 a 29.9\tSobrepeso\n");
    printf(">=30\t\tObesidad\n");

    return 0;
}

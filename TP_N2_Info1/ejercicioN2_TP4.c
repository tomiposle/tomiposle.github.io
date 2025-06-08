// bmi_tp3_modificado.c
#include <stdio.h>

int main() {
    float peso, altura, bmi;

    // Solicitar datos al usuario
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    // Calcular el índice de masa corporal
    bmi = peso / (altura * altura);

    // Mostrar el resultado del BMI
    printf("\nSu índice de masa corporal es: %.2f\n\n", bmi);

    // Mostrar la tabla de condiciones
    printf("Índice\t\tCondición\n");
    printf("-----------------------------\n");
    printf("<18.5\t\tBajo peso\n");
    printf("18.5 a 24.9\tNormal\n");
    printf("25.0 a 29.9\tSobrepeso\n");
    printf(">=30\t\tObesidad\n");

    // Determinar la condición del usuario
    printf("\nUsted se encuentra en la categoría: ");

    if (bmi < 18.5) {
        printf("Bajo peso\n");
    } else if (bmi < 25.0) {
        printf("Normal\n");
    } else if (bmi < 30.0) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }

    return 0;
}

// bmi_tp3_modificado.c
#include <stdio.h>

int main() {
    float peso, altura, bmi;

    // Validación del peso (debe ser mayor que 0)
    do {
        printf("Ingrese el peso en kg: ");
        scanf("%f", &peso);
        if (peso <= 0) {
            printf("Error: El peso debe ser un número positivo mayor que cero.\n");
        }
    } while (peso <= 0);

    // Validación de la altura (debe ser mayor que 0, agregado al script del TP numero 5)
    do {
        printf("Ingrese la altura en metros: ");
        scanf("%f", &altura);
        if (altura <= 0) {
            printf("Error: La altura debe ser un número positivo mayor que cero.\n");
        }
    } while (altura <= 0);

    // Cálculo del índice de masa corporal
    bmi = peso / (altura * altura);

    printf("\nSu índice de masa corporal es: %.2f\n\n", bmi);

    // Tabla de referencia
    printf("Índice\t\tCondición\n");
    printf("-----------------------------\n");
    printf("<18.5\t\tBajo peso\n");
    printf("18.5 a 24.9\tNormal\n");
    printf("25.0 a 29.9\tSobrepeso\n");
    printf(">=30\t\tObesidad\n");

    // Clasificación del usuario (agregado al script del TP numero 3)
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


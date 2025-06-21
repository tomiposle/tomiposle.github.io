#include <stdio.h>

int main() {
    
    int cantidad_estudiantes;
    
    // Validar cantidad de estudiantes (debe ser positiva)
    do {
        printf("Ingrese la cantidad de estudiantes: ");
        scanf("%d", &cantidad_estudiantes);
        if (cantidad_estudiantes <= 0) {
            printf("Error: La cantidad de estudiantes debe ser un número positivo.\n");
        }
    } while (cantidad_estudiantes <= 0);

    float calificacion, suma = 0;
    float max = -1, min = 101;  // Valores extremos iniciales para actualizar correctamente

    // Solicitar calificaciones
    for (int i = 1; i <= cantidad_estudiantes; i++) {
        do {
            printf("Ingrese la calificación del estudiante %d (0-100): ", i);
            scanf("%f", &calificacion);
            if (calificacion < 0 || calificacion > 100) {
                printf("Error: Calificación fuera de rango. Intente nuevamente.\n");
            }
        } while (calificacion < 0 || calificacion > 100);

        suma += calificacion;

        if (calificacion > max) {
            max = calificacion;
        }
        if (calificacion < min) {
            min = calificacion;
        }
    }

    float promedio = suma / cantidad_estudiantes;

    // Mostrar resultados
    printf("\nPromedio de calificaciones: %.2f\n", promedio);
    printf("Calificación más alta: %.2f\n", max);
    printf("Calificación más baja: %.2f\n", min);

    return 0;
}

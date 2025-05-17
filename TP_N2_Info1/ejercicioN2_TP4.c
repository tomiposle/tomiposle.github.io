#include <stdio.h>

int main() {
    int nota;

    printf("Ingrese la calificación: ");
    scanf("%d", &nota);

    if (nota >= 90) {
        printf("Calificación: A\n");
        printf("Usted se encuentra en la condición: 90 a 100 (Calificación A)\n");
    } else if (nota >= 80 && nota < 90) {
        printf("Calificación: B\n");
        printf("Usted se encuentra en la condición: 80 a 89 (Calificación B)\n");
    } else if (nota >= 70 && nota < 80) {
        printf("Calificación: C\n");
        printf("Usted se encuentra en la condición: 70 a 79 (Calificación C)\n");
    } else if (nota >= 60 && nota < 70) {
        printf("Calificación: D\n");
        printf("Usted se encuentra en la condición: 60 a 69 (Calificación D)\n");
    } else if (nota < 60) {
        printf("Calificación: F\n");
        printf("Usted se encuentra en la condición: Menor a 60 (Calificación F)\n");
    }

    return 0;
}

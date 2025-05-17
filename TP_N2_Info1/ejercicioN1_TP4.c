#include <stdio.h>
int main(){
    int nota;
    printf("Ingrese la calificación: ");
    scanf("%d",&nota);
    if (nota >= 90){
        printf("Calificación: A\n");
    } else if (nota >= 80 && nota < 90){
        printf("Calificacion: B\n");
    } else if (nota >= 70 && nota < 80 ){
        printf("Calificacion: C\n");
    } else if (nota >= 60 && nota < 70 ){
        printf("Calificacion: D\n");
    } else if (nota < 60){
        printf("Calificacion: F\n");
    }
    
    return 0;
}

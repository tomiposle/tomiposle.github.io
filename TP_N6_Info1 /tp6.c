#include <stdio.h>
#include <math.h>
#define PI 3.14159265f

float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularDiagonalRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultados(float area, float perimetro);

int main(){
    
   int opc;
   float longitudrec, alturarec, radio, perimetrorec, arearec, diagonalrec, perimetrocirc, areacirc;
   do {
      printf("¡Bienvenido a la calculadora de areas y perimetros de figuras geometricas! Seleccione una opcion:\n");
      printf("Opcion 1: Figura de rectangulo:\n");
      printf("Opcion 2: Figura de circulo\n");
      scanf("%d", &opc);
      switch (opc){
          case 1:
            printf("Opcion de calculo de rectangulo seleccionada\n");
            printf("Ingrese la longitud de uno de los lados y la altura respectivamente\n");
            printf("Longitud:");
            scanf("%f", &longitudrec);
            while (longitudrec < 0 ){
                printf("Error, ingrese un valor positivo: ");
                scanf("%f", &longitudrec);
            }
            printf("Altura:");
            scanf("%f", &alturarec);
            while (alturarec < 0 ){
                printf("Error, ingrese un valor positivo: ");
                scanf("%f", &alturarec);
            }
            perimetrorec = calcularPerimetroRectangulo(longitudrec, alturarec);
            arearec = calcularAreaRectangulo(longitudrec, alturarec);
            diagonalrec = calcularDiagonalRectangulo(longitudrec, alturarec);
            imprimirResultados(perimetrorec, arearec);
            printf("La diagonal del rectángulo es: %.5f", diagonalrec);
            return 0;
          case 2:
            printf("Opcion de calculo de circulo seleccionada\n");
            printf("Ingrese el radio del circulo\n");
            printf("Radio:");
            scanf("%f", &radio);
            while (radio < 0 ){
                printf("Error, ingrese un valor positivo: ");
                scanf("%f", &radio);
            }
            perimetrocirc = calcularPerimetroCirculo(radio);
            areacirc = calcularAreaCirculo(radio);
            imprimirResultados(perimetrocirc, areacirc);
            return 0;
        default: printf("Opcion invalida, ingrese una de las dos opciones validas, por favor\n");
        }
      
   } while (opc < 1 || opc > 2);
   

    return 0;
}

float calcularPerimetroRectangulo(float longitud, float altura){
  return 2.0f * (longitud + altura);
}

float calcularAreaRectangulo(float longitud, float altura){
    return longitud * altura;
}

float calcularDiagonalRectangulo(float longitud, float altura){
    return sqrtf(powf(longitud, 2) + powf(altura, 2));
}

float calcularPerimetroCirculo(float radio){
    return PI * 2.0f * radio; 
}

float calcularAreaCirculo(float radio){
    return PI * powf(radio, 2);
}

void imprimirResultados(float perimetro, float area){
    printf("El perimetro de la figura es: %.5f\n", perimetro);
    printf("El area de la figura es: %.5f\n", area);
}

// Link a GitHub del codigo: 
// https://github.com/tomiposle/tomiposle.github.io/blob/main/TP_N7_Info1/tp7.c
#include <stdio.h>
#define TAM 5
#define MIN 1LL
#define MAX 999999999LL

int pedir_codigo(void);

double pedir_precio(void);

void cargar_productos(int[], double[]);

void imprimir_lista(const int[], const double[]);

void extremos_precios(const double[], int *, int *);

int main(){
    int codigos[TAM];
    double precios[TAM];
    
    cargar_productos(codigos, precios);
    
    imprimir_lista(codigos, precios);

    int idmin, idmax;
    extremos_precios(precios, &idmin, &idmax);

    printf("\nMas caro:    [%d] %.2f\n", codigos[idmax], precios[idmax]);
    printf("Mas barato:  [%d] %.2f\n", codigos[idmin], precios[idmin]);

    return 0;
}

int pedir_codigo(void){
    long long vali_codigo;
    do{
        printf("Ingrese el codigo de barras entre (%lld-%lld): ", MIN, MAX);
        scanf("%lld", &vali_codigo);
        if (vali_codigo < MIN || vali_codigo > MAX){
            printf("Error, ingrese un numero dentro del intervalo\n");
        }
    } while (vali_codigo < MIN || vali_codigo > MAX);
    
    return vali_codigo;
}


double pedir_precio(void){
    double vali_precio;
    do{
        printf("Ingrese el precio del producto: ");
        scanf("%lf", &vali_precio);
        if (vali_precio < 0.0){
            printf("Error, el precio no puede ser negativo\n");
        }
    } while(vali_precio < 0.0);
    
    return vali_precio; 
}

void cargar_productos(int codigos[], double precios[]){
    printf("Ingrese %d productos, se solicitara el codigo y el precio\n\n", TAM);
    for(int i = 0; i < TAM; i++){
        codigos[i] = pedir_codigo();
        precios[i] = pedir_precio();
        printf("\n");
    } 
}

void imprimir_lista(const int codigos[], const double precios[]){
    printf("Codigo             Precio\n");
    for (int i = 0; i < TAM; i++) {
        printf("%-14d %10.2f\n", codigos[i], precios[i]);
    }
}

void extremos_precios(const double precios[], int *idmin, int *idmax){
    int i_min = 0, i_max = 0;
    for (int i = 1; i < TAM; i++){
        
        if (precios[i] < precios[i_min]){ 
            i_min = i;
        }
        
        if (precios[i] > precios[i_max]){ 
            i_max = i;
        }
    }
    *idmin = i_min;
    *idmax = i_max;
}


#include <stdio.h>
int main()
{
	char day [100];
	char saludos [] = "Buenos Dias";
	float dol;
	float dolman;
	printf("Ingrese el día actual: ");
	scanf("%s", &day);
	printf("Ingrese el valor del dolar: ");
	scanf("%f", &dol);
	printf("Ingrese cuanto bajará mañana: ");
	scanf("%f", &dolman);
	printf("%s Tomi\nHoy es el dia %s!, el valor del dolar es %.1f, mañana se espera que baje %.1f respecto a su valor actual",saludos, day, dol, dolman);
    return 0;
}
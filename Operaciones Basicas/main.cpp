#include <conio.h>
#include <stdio.h>


int main()
{
    float num1;
    float num2;
    float suma[2];
    float resta;
    float multiplicacion;
    float divicion;

    printf("Introduzca el primer numero: ");
    scanf("%f", &num1);

    printf("Introduzca el segundo numero: ");
    scanf("%f", &num2);

    suma = (num1+num2);
    resta = (num1-num2);
    multiplicacion = (num1*num2);
    divicion = (num1/num2);

    printf("La suma es: %f", suma);
    printf("\nLa resta es: %f",resta);
    printf("\nLa multiplicacion es: %f", multiplicacion);
    printf("\nLa divicion es:  %f", divicion);


}

#include <conio.h>
#include <stdio.h>

int main()
{
    char nombre[20];
    int  nacimiento;
    int  act= 2024;
    int  edad;

    printf("Introduce tu nombre: ");
    scanf(" %s", &nombre);

    printf("introduce tu año de nacimiento: ");
    scanf("%d", &nacimiento);

    edad= (act-nacimiento);

    printf("\nTu nombre es: %s", nombre);
    printf("Tu edad es: %d", edad);

    getch();
    return 0;
}

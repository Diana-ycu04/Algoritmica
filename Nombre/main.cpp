//Programa: Nombre//

//#include <stdio.h>//
#include <conio.h>
#include<cstdio> //se usa esta libreria para no usar las dos anteriores//

int main()
{
    char nombre[20];, apellido[20];

    printf("Introduzca su nombre: ");
    scanf("%s", nombre);

    printf("Introduzca su apellido: ");
    scanf("%s", apellido);
    printf("Hola %s %s, buenos dias.", nombre, apellido /*,161*/);

    getch(); /*pausa*/

    return 0;
}

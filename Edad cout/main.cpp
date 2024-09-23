#include <iostream>

using namespace std;

int main()
{
    int actual=2024;
    int nacimiento;
    int edad;
    char nombre [20];

    cout<<"Ingresa tu nombre: ";
    cin>>nombre;
    cout<<"Ingresa tu año de nacimiento: ";
    cin>>nacimiento;

    edad= actual-nacimiento;

    cout<<"Tu nombre es:"<<nombre;
    cout<<"Tu edad es: "<<edad;

    return 0;
}

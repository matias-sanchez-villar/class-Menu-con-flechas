#include <iostream>
using namespace std;
#include "class/Menu.h"

/*
*
*   Pasos a seguir:
*       Creamos una constante char de tipo puntero, con las opciones del menú.
*       Instanciamos la clase Menú y le colocamos al constructor titulo, opciones y cantidad de opciones.
*       Instanciamos el método pintar, para que dibuje las flechas en la consola.
*       Dentro de un switch colocamos el método mover, el cual nos retornara la opción seleccionada.
*
*/

int main(){
    const char *opcione[] = {"Sumar", "Restar", "Multiplicar", "Dividir", "Salir"};
    Menu uno("Menu principal", opcione, 5);
    uno.Pintar();
    switch(uno.Mover()){
        case 4:
            cout<<"Opcion sumar";
        break;
        case 5:
            cout<<"Opcion Restar";
        break;
        case 6:
            cout<<"Opcion Multiplicar";
        break;
        case 7:
            cout<<"Opcion Dividir";
        break;
        case 8:
            cout<<"Opcion salir";
        break;
    }
return 0;
}

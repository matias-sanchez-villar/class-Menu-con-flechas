#include <iostream>
using namespace std;
#include "class/Menu.h"

/*
*
*   Pasos a seguir:
*       Creamos una constante char de tipo puntero, con las opciones del men�.
*       Instanciamos la clase Men� y le colocamos al constructor titulo, opciones y cantidad de opciones.
*       Instanciamos el m�todo pintar, para que dibuje las flechas en la consola.
*       Dentro de un switch colocamos el m�todo mover, el cual nos retornara la opci�n seleccionada.
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

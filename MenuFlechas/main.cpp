#include <iostream>
using namespace std;
#include "class/Menu.h"

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

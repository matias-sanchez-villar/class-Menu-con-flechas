#include <iostream>
using namespace std;
#include <conio.h>
#include "rlutil.h"
using namespace rlutil;
#include "ui.h"

#define Arriba 80
#define Abajo 72
#define Enter 13
#define Flecha "=>"

class Menu{
    private:
        int y, tam;
        const int x=5;
    public:
        Menu(const char *Titulo, const char *_Opciones[], int Cantidad);
        ///Capturamos movimientos
        void Pintar();
        void Borrar();///retorna la opcion
        int Mover();
};

Menu::Menu(const char *Titulo, const char *_Opciones[], int Cantidad){
    y=4;
    tam=Cantidad;
    ///imprimimos menu
    title(Titulo, APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
    system ("cls");
    title(Titulo, APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
    for(int p;p<Cantidad;p++){
        gotoxy(x+3,y++);
        cout<<_Opciones[p]<<endl;
    }
    y=4;
}

void Menu::Pintar(){
    gotoxy(x,y);
    cout<<Flecha;
}

void Menu::Borrar(){
    gotoxy(x,y);
    cout<<"  ";
}

int Menu::Mover(){
    while(1){
        if(kbhit()){
            Borrar();
            char Tecla=getch();
            switch(Tecla){
                case Arriba:
                    y++;
                    if(y==4+tam){
                        y=4;
                    }
                break;
                case Abajo:
                    y--;
                    if(y==3){
                        y=tam+3;
                    }
                break;
                case Enter:
                    system("cls");
                    return y;
                break;
            }
            Pintar();
        }
    }
return 0;
}

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

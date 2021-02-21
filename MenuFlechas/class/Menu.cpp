#include <iostream>
using namespace std;
#include <conio.h>
#include "../rlutil.h"
using namespace rlutil;
#include "../ui.h"
#include "Menu.h"

#define Arriba 80
#define Abajo 72
#define Enter 13
#define Flecha "=>"

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

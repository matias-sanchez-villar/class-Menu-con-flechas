#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

/*
*
*   class menu -> M�todos :
*       El constructor necesita el t�tulo, las opciones del men� y la cantidad de opciones.
*       Mover(), retorna la opci�n seleccionada del men�.
*
*/

class Menu{
    private:
        int y, tam;
        const int x=5;
    public:
        Menu(const char *Titulo, const char *_Opciones[], int Cantidad);
        ///Capturamos movimientos
        void Pintar();
        void Borrar();
        int Mover();///retorna la opcion seleccionada
};

#endif // MENU_H_INCLUDED

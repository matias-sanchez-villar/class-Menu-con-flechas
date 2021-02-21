#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

/*
*
*   class menu -> Métodos :
*       El constructor necesita el título, las opciones del menú y la cantidad de opciones.
*       Mover(), retorna la opción seleccionada del menú.
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

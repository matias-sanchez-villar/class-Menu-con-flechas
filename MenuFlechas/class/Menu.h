#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

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

#endif // MENU_H_INCLUDED

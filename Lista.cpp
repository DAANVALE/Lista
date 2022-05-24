#include <iostream>
#include <stdio.h>
#include <string>
#include "Nodo.h"
using namespace std;

int main(void)
{
    cout << "Hello World!\n";
    
    Nodo*_lista = NULL;
    _lista = _lista->insertar(_lista, 1,"daan");
    _lista = _lista->insertar(_lista, 2,"pedro");
    _lista = _lista->insertar(_lista, 3,"juan");
    _lista = _lista->insertar(_lista, 4,"isra");

    _lista->mostrar(_lista);

    _lista->buscar(_lista, 5);
    _lista->buscar(_lista, 2);

    _lista = _lista->completar(_lista,3);
    cout << "++++++++++++" << endl;
    _lista->mostrar(_lista);
    cout << "++++++++++++" << endl;
    _lista = _lista->eliminar(_lista, 2);
    cout << "------------" << endl;
    _lista->mostrar(_lista);
    cout << "------------" << endl;
    return 0;
}
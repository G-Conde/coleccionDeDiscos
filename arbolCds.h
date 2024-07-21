#ifndef ARBOLCDS_H_INCLUDED
#define ARBOLCDS_H_INCLUDED
#include "stCd.h"

typedef struct{
    stCds dato;
    nodoArbol*izq;
    nodoArbol*der;
}nodoArbol;

nodoArbol* inicArbol(nodoArbol* arbol);
nodoArbol* crearArbol(stCds dato);
nodoArbol* agregarArbol(nodoArbol*arbol,nodoArbol * nuevo);

#endif // ARBOLCDS_H_INCLUDED

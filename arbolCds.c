#include <stdio.h>
#include "conio.h"
#include <stdlib.h>
#include "arbolCds.h"

nodoArbol* inicArbol(nodoArbol* arbol)
{
    return NULL;
}
nodoArbol* crearArbol(stCds dato)
{
    nodoArbol* nuevo=(nodoArbol*)malloc(sizeof(nodoArbol));
    nuevo->dato=dato;
    nuevo->izq=NULL;
    nuevo->der=NULL;
    return nuevo;
}
nodoArbol* agregarArbol(nodoArbol*arbol,nodoArbol * nuevo)
{
    if(!arbol)
    {
        arbol=crearArbol(nuevo->dato);
    }else{

        if(nuevo->dato.yearRelease < arbol->dato.yearRelease)
        {
            arbol->der=agregarArbol(arbol->der,nuevo);
        }else{

            arbol->izq=agregarArbol(arbol->izq,nuevo);
        }
    }
    return arbol;
}

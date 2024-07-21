#ifndef ADL_H_INCLUDED
#define ADL_H_INCLUDED
#include "stArtist.h"
#include "arbolCds.h"

typedef struct{
    stArtists artist[20];
    nodoArbol* arbol;
}stCelda;

int alta(stCelda celda[], int v, stCds c, stArtists a);
int buscaPos(stCelda celda[], int v, int id);
int agregarArtista(stCelda celda[], int v, stArtists a);


#endif // ADL_H_INCLUDED

#include "adl.h"
#include "strings.h"


int alta(stCelda celda[], int v, stCds c, stArtists a)
{
    int pos=buscaPos(celda,v,a.id);
    if(pos==-1)
    {
        v=agregarArtista(celda,v,a);
        pos=v-1;
    }
    celda[pos].arbol=agregarArbol(celda[pos].arbol,crearArbol(c));
    return v;
}

int buscaPos(stCelda celda[], int v, int id)
{
    int pos=-1;
    int i=0;
    while(i<v && pos==-1)
    {
        if(id == celda[i].artist.id)
        {
            pos=i;
        }
        i++;
    }
    return pos;
}
int agregarArtista(stCelda celda[], int v, stArtists a) {
    celda[v].artist.id = a.id;
    strcpy(celda[v].artist.name, a.name);
    strcpy(celda[v].artist.nationality, a.nationality);
    celda[v].arbol = inicArbol(NULL); // Inicializa el árbol del artista
    return v + 1;
}

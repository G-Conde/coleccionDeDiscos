#include "adl.h"


int alta(stCelda celda[], int v, stCds c, stArtists a)
{
    int pos=buscaPos(celda,v,a);
    if(pos==-1)
    {
        v=agregarEquipo(celda,v,e);
        pos=v-1;
    }
    celda[pos].arbolJugadores=agregarArbol(celda[pos].arbolJugadores,crearArbol(j));
    return v;
}
int buscaPos(stCelda celda[], int v, int idEquipo)
{
    int pos=-1;
    int i=0;
    while(i<v && pos==-1)
    {
        if(idEquipo==celda[i].equipo.idEquipo)
        {
            pos=i;
        }
        i++;
    }
    return pos;
}
int agregarEquipo(stCelda celda[], int v, stEquipo e)
{
    celda[v].equipo.idEquipo=e.idEquipo;
    strcpy(celda[v].equipo.nombreEquipo,e.nombreEquipo);
    celda[v].equipo.puntosGanados=e.puntosGanados;
    return v+1;
}

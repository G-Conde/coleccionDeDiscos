#include <stdio.h>
#include <stdlib.h>
#include "adl.h"


int main()
{
    stCds c;
    stArtists a;
    stCelda cel[15];
    a=cargarArtista();
    c=cargaCds();
    int v =0 ;
    v= alta(cel,v,c,a);
    printf("Artista: %s, Nacionalidad: %s\n", cel[0].artist.name, cel[0].artist.nationality);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "stCd.c"
#include "stArtist.c"

int main()
{
    stCds cd;
    stArtists a, b;
    a=cargarArtista();
    b=cargarArtista();
    muestraArtista(a);
    muestraArtista(b);
    cd=cargaCds();
    muestraCds(cd);
    return 0;
}

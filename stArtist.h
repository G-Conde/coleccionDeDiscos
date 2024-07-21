#ifndef STARTIST_H_INCLUDED
#define STARTIST_H_INCLUDED

typedef struct{
    int id;
    char name[15];
    char nationality[15];
}stArtists;

int getNextId();
stArtists cargarArtista();
void muestraArtista(stArtists a);


#endif // STARTIST_H_INCLUDED

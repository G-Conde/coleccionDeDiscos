#include <stdlib.h>
#include <stdio.h>
#include "strings.h"
#include "conio.h"
#include "stArtist.h"
#define MAX 15

int getNextId() { //Uso una funcion que me permita reutilizarla o bien el mantenimiento del codigo va a ser mas sencillo
    static int currentId = 1; // Variable estática para mantener el último ID asignado.
    return currentId++;
}

stArtists cargarArtista(){
    stArtists a;
    a.id= getNextId();
    printf("Nombre del artista:\n");
    fgets(a.name, MAX, stdin);
    a.name[strcspn(a.name, "\n")] = '\0';
    printf("Nacionalidad:\n");
    fgets(a.nationality,MAX, stdin);
     a.nationality[strcspn(a.nationality, "\n")] = '\0';
    return a;
}

void muestraArtista(stArtists a){
    printf("ID:%d Nombre del artista: %s  Nacionalidad: %s\n", a.id, a.name, a.nationality);
}

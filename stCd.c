#include <stdio.h>
#include <stdlib.h>
#include "strings.h"
#include "conio.h"
#include "stCd.h"

stCds cargaCds(){
    stCds a;
    printf("Title:\n");
    fgets(a.title, MAX, stdin);
    a.title[strcspn(a.title, "\n")] = '\0';
    printf("Año de lanzamiento:\n");
    scanf("%d",&)
    printf("Duration:\n");
    scanf("%d",&a.duration);
    printf("Price:\n");
    scanf("%f",&a.price);
    while(getchar() != '\n');
    printf("Genre:\n");
    fgets(a.genre,MAX, stdin);
     a.genre[strcspn(a.genre, "\n")] = '\0';
return a;
}

void muestraCds(stCds c){
    printf("TITLE...............: %s\n", c.title);
    printf("DURATION.............: %d\n", c.duration);
    printf("PRICE..................: %.2f\n", c.price);
    printf("GENRE.................: %s", c.genre);
    printf("\n----------------------------------------------------------");
}



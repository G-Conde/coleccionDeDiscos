#ifndef STCD_H_INCLUDED
#define STCD_H_INCLUDED
#define MAX 15

typedef struct{
    char title[MAX];
    int duration;
    float price;
    char genre[MAX];
}stCds;

stCds cargaCds();
void muestraCds(stCds c);

#endif // STCD_H_INCLUDED

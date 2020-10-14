#ifndef TIPOSFUNCTIONS_H_INCLUDED
#define TIPOSFUNCTIONS_H_INCLUDED

#endif // TIPOSFUNCTIONS_H_INCLUDED

typedef struct
{
    int id; //empieza en 5000
    char descripcion[20];
}sTipo;

void tiposInit(sTipo[]);
void showTipo(sTipo);
int showTipos(sTipo[],int);

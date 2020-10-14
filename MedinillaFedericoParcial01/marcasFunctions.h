#ifndef MARCASFUNCTIONS_H_INCLUDED
#define MARCASFUNCTIONS_H_INCLUDED

#endif // MARCASFUNCTIONS_H_INCLUDED

typedef struct
{
    int id; //empieza en 1000
    char descripcion[20];
}sMarca;

void marcasInit(sMarca[]);
void showMarca(sMarca);
int showMarcas(sMarca[],int);

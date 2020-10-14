#ifndef SERVICIOSFUNCTIONS_H_INCLUDED
#define SERVICIOSFUNCTIONS_H_INCLUDED

#endif // SERVICIOSFUNCTIONS_H_INCLUDED

typedef struct
{
    int id; //empieza en 20000
    char descripcion[25];
    int precio;
}sServicio;

void serviciosInit(sServicio[]);
void showServicio(sServicio);
int showServicios(sServicio[],int);

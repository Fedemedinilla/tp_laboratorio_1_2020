#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define TAM 4

#include "serviciosFunctions.h"

void serviciosInit(sServicio list[])
{
    int idList[TAM]={20000,20001,20002,20003};
    char descripcionList[TAM][25]={"Bateria","Antivirus","Atualizacion","Fuente"};
    int precioList[TAM]={250,300,400,600};

    for(int i=0;i<TAM;i++)
    {
        list[i].id=idList[i];
        strcpy(list[i].descripcion,descripcionList[i]);
        list[i].precio=precioList[i];
    }
}
void showServicio(sServicio servicio)
{
    printf("%d = %s $%d\n",servicio.id,servicio.descripcion,servicio.precio);
    printf("-----------------\n");
}
int showServicios(sServicio list[],int tam)
{
    int error;
    error=1;

    if(list!=NULL&&tam>0)
    {
        for(int i=0;i<tam;i++)
        {
            showServicio(list[i]);
        }
        error=0;
    }

    return error;
}

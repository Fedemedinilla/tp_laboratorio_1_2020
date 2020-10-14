#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define TAM 4

#include "marcasFunctions.h"

void marcasInit(sMarca list[])
{
    int idList[TAM]={1000,1001,1002,1003};
    char descripcionList[TAM][20]={"Compaq","Asus","Acer","HP"};

    for(int i=0;i<TAM;i++)
    {
        list[i].id=idList[i];
        strcpy(list[i].descripcion,descripcionList[i]);
    }
}
void showMarca(sMarca marca)
{
    printf("%d = %s\n",marca.id,marca.descripcion);
    printf("-----------\n");
}
int showMarcas(sMarca list[],int tam)
{
    int error;
    error=1;

    if(list!=NULL&&tam>0)
    {
        for(int i=0;i<tam;i++)
        {
            showMarca(list[i]);
        }
        error=0;
    }

    return error;
}

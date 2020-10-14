#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "Menu.h"
#include "getFunctions.h"
#include "notebookFunctions.h"

#define MAXTAM 20


int addNotebook(sNotebook list[],int tam,int id)
{
    sNotebook auxNotebook;
    int error;
    int emptyIndex;

    error=1;
    for(int i=0;i<tam;i++)
    {
        if(list[i].id!=id)
        {
            emptyIndex=i;
        }
    }
    if(list!=NULL&&tam>0&&id>0)
    {
        auxNotebook.id=id;
        printf("Complete los datos de la notebook a agregar(ID:%d):\n",auxNotebook.id);

        checkModelo(auxNotebook.modelo,"\nIngrese el MODELO(MAX 20 caracteres): ","*ERROR* Ingrese el nombre(MAX 20 caracteres): ",MAXTAM);
        auxNotebook.idMarca=checkIdMarca("\nIngrese el ID de la MARCA(1000-1003): ","\n*ERROR* Ingrese el ID de la MARCA(1000-1003): ");
        auxNotebook.idTipo=checkIdTipo("\nIngrese el ID del TIPO(5000-5003): ","\n*ERROR* Ingrese el ID del TIPO(5000-5003): ");
        auxNotebook.precio=checkFloat("\nIngrese el PRECIO: ","\n*ERROR* Ingrese el PRECIO: ");

        list[emptyIndex]=auxNotebook;

        error=0;
    }

    return error;
}

void showNotebook(sNotebook notebook)
{
    printf("%d   %s   %4d   %4d  $%.2f\n",notebook.id,notebook.modelo,notebook.idMarca,notebook.idTipo,notebook.precio);
    printf("---------------------------\n");
}
int showNotebooks(sNotebook list[],int tam)
{
    int error;
    int flag;
    flag=0;

    if(list!=NULL&&tam>0)
    {
        for(int i=0;i<tam;i++)
        {
            if(list[i].id>99)
            {
                printf("ENTRE");
                showNotebook(list[i]);
                flag=1;
                error=0;
            }
        }
        if(flag==0)
        {
            error=1;
        }
    }

    return error;
}


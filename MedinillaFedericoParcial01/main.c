#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Menu.h"
#include "getFunctions.h"
#include "marcasFunctions.h"
#include "tiposFunctions.h"
#include "serviciosFunctions.h"
#include "notebookFunctions.h"

#define VACIO 1
#define OCUPADO 0

int main()
{
    char menuExitChoice;
    char exitShow;
    int idNotebook;
    idNotebook=100;

    sNotebook notebookList[99];
    sMarca marcasList[4];
    sTipo tiposList[4];
    sServicio serviciosList[4];

    marcasInit(marcasList);
    tiposInit(tiposList);
    serviciosInit(serviciosList);

    do
    {
        switch(showMenu())
        {
        case 1:
            do
            {
                if(addNotebook(notebookList,99,idNotebook)!=1)
                {
                    printf("\n\n*SUCCESS* Se cargo una notebook con exito");
                    idNotebook++;
                }
                else
                {
                    printf("\n\n*ERROR* Ocurrio un error al cargar la notebook...\n");
                }
                exitShow=yesNoFunction("\nDesea cargar otra?(Y/N): ","*ERROR* Desea cargar otra?(Y/N): ");
            }while(exitShow!='n');
            break;
        case 2:
            break;
        case 4:
            do
            {
                if(showNotebooks(notebookList,99)!=1)
                {
                    printf("\n\n*SUCCESS* Se cargaron las notebooks con exito!");
                }
                else
                {
                    printf("\n\n*ERROR* Ocurrio un error al cargar las notebooks...\n");
                }
                exitShow=yesNoFunction("\nDesea volver al menu principal?(Y/N): ","*ERROR* Desea volver al menu principal?(Y/N): ");
            }while(exitShow!='y');
            break;
        case 5:
            do
            {
                if(showMarcas(marcasList,4)!=1)
                {
                    printf("\n*SUCCESS* Marcas cargadas con exito!\n");
                }
                else
                {
                    printf("\n*ERROR* Ocurrio un error al mostrar las marcas...\n");
                }
                exitShow=yesNoFunction("\nDesea volver al menu principal?(Y/N): ","*ERROR* Desea volver al menu principal?(Y/N): ");
            }while(exitShow!='y');
            break;
        case 6:
            do
            {
                if(showTipos(tiposList,4)!=1)
                {
                    printf("\n*SUCCESS* Tipos cargados con exito!\n");
                }
                else
                {
                    printf("\n*ERROR* Ocurrio un error al mostrar los tipos...\n");
                }
                exitShow=yesNoFunction("\nDesea volver al menu principal?(Y/N): ","*ERROR* Desea volver al menu principal?(Y/N): ");
            }while(exitShow!='y');
            break;
        case 7:
            do
            {
                if(showServicios(serviciosList,4)!=1)
                {
                    printf("\n*SUCCESS* Servicios cargados con exito!\n");
                }
                else
                {
                    printf("\n*ERROR* Ocurrio un error al mostrar los servicios...\n");
                }
                exitShow=yesNoFunction("\nDesea volver al menu principal?(Y/N): ","*ERROR* Desea volver al menu principal?(Y/N): ");
            }while(exitShow!='y');
            break;
        case 10:
            menuExitChoice=yesNoFunction("\n\nDesea salir?(Y/N): "," *ERROR* Ingrese una opcion valida.\n Desea salir?(Y/N): ");
            break;
        default:
            printf(" *ERROR* Ingrese una opcion correcta.");
            break;
        }
    }while(menuExitChoice!='y');

    programEnd();
    return 0;
}

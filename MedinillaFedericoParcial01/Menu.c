#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "Menu.h"
#include "getFunctions.h"

int showMenu()
{
    int option;

    printf("\n\n |============================================|\n");
    printf(" |                                            |\n");
    printf(" |            *** BIENVENIDO ***              |\n");
    printf(" |                                            |\n");
    printf(" |               1- Altas                     |\n");
    printf(" |               2- Modificar Notebook>>      |\n");
    printf(" |               3- Baja Notebook             |\n");
    printf(" |               4- Listar Notebooks          |\n");
    printf(" |               5- Listar Marcas             |\n");
    printf(" |               6- Listar Tipos              |\n");
    printf(" |               7- Listar Servicios          |\n");
    printf(" |               8- Altas Trabajo             |\n");
    printf(" |               9- Listar Trabajos           |\n");
    printf(" |               10- Salir                    |\n");
    printf(" |                                            |\n");
    printf(" |============================================|\n");

    option=getMenuOption("\n Ingrese una opcion: ");
    system("cls");
    return option;
}
void programEnd()
{
    printf("\n |===========================================|");
    printf("\n |       *** PROGRAMA FINALIZADO ***         |");
    printf("\n |===========================================|\n");
}

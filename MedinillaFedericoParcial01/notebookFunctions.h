#ifndef NOTEBOOKFUNCTIONS_H_INCLUDED
#define NOTEBOOKFUNCTIONS_H_INCLUDED



#endif // NOTEBOOKFUNCTIONS_H_INCLUDED


typedef struct
{
    int dia;
    int mes;
    int anio;
}sFecha;

typedef struct
{
    int id;
    char modelo[20];
    int idMarca;
    int idTipo;
    float precio;

}sNotebook;

/*typedef struct
{
    int id; //autoincremental
    int idNotebook;
    int idServicio;
    sFecha trabajoFecha;
}sTrabajo;
*/

void checkModelo(char[],char[],char[],int);
int addNotebook(sNotebook[],int,int);
void showNotebook(sNotebook);
int showNotebooks(sNotebook[],int);

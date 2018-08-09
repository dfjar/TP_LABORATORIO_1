#ifndef ARCHI_H_INCLUDED
#define ARCHI_H_INCLUDED
#include"movie.h"

void crearTxt (eMovie *,int );
void crearArchivoHtml(eMovie *,int );

int cargarDesdeArchivo(eMovie *,int);
int GuardarArchivo(eMovie *,int);
#endif // ARCHI_H_INCLUDED

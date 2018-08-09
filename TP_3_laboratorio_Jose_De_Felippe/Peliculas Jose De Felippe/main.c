#include <stdio.h>
#include <stdlib.h>
#include"movie.h"
#include"validaciones.h"

#define TAM_html 8
#define TAM 20

int main()
{
int i;

    eMovie PeliculasHard [TAM_html];
    initStruct(PeliculasHard,TAM_html,0);
    hardCode(PeliculasHard,TAM_html);

    menuABM(PeliculasHard,TAM_html,"\nPeliculas\n\nIngrese una Opcion\n");
    printf("\n");
    return 0;
}

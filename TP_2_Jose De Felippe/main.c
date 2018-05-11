#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"
#include "funciones.c"

int main()
{
    char seguir='s';
    int opcion=0;
    EPersona lista[MAX_ARRAY];

    inicializar_personas(lista,MAX_ARRAY);

    while(seguir=='s')
    {
        printf("\n");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                agregarPersona(lista);
                break;
            case 2:
                borrarPersona(lista);
                break;
            case 3:
                imprimirListaOrdenada(lista);
                break;
            case 4:
                imprimirGrafico(lista);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }
    return 0;
}


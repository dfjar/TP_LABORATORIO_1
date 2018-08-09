#include<string.h>
#include<stdio.h>
#include"validaciones.h"
#include"movie.h"
#include"menu.h"

void menuABM(eMovie *peliculas, int tamanio,char mensaje[])
{
    int op=0;
    listadoPeliculas(peliculas,tamanio);
    int s;
    int id;

     do{
        printf("%s\n",mensaje);
        printf(" 1. Agregar Pelicula\n 2. Borrar\n 3. Modificar\n 4. Listar\n 5. HTML \n 6. SALIR\n");

        scanf("%d",&op);
        op=validarNumero(op,1,6);
        switch(op)
            {

                case 1:
                       printf("Ingrese Una Pelicula Nueva");
                       getchar ();
                       ingresarPeliculas(peliculas,tamanio);
                    break;
                case 2:
                       s=borrarPelicula(peliculas,tamanio,"\nPelicula a Borrar\nIngrese el ID a Borrar\n");
                       if(s!=0)
                       {
                        op=6;
                    break;
                       }
                    break;
                case 3:
                       id=getInt("\nPelicula a Modificar\nIngrese el Id a Modificar\n");
                       modificarPelicula(peliculas,tamanio,id,"\nPelicula a Modificar\nIngrese el Id\n");
                    break;
                case 4:
                       listadoPeliculas(peliculas,tamanio);
                    break;
                case 5:
                       crearArchivoHtml(peliculas,tamanio);
                    break;
                case 6:
                       printf("Salir");
                       op=6;
                    break;
            }
            system("pause");
            system("cls");

    }while(op!=6);
}

int validarGenero(eMovie *Peliculas, int tamanio, int id)
{
    int i;
    int num;
    int index;
    char genero[5][20]={"Terror","Comedia","Drama","Ficcion","Accion","suspenso"};
    printf("\nSeleccione un genero\n");
    printf("1. Terror\n 2. Comedia\n 3. Drama\n 4. Ficcion\n 5.Accion\n");
    scanf("%d",&num);
    num=buscaIdPelicula(Peliculas,tamanio,num);
    num=validarNumero(num,1,5);
    for(i=0;i<tamanio;i++)
    {
         if(index==num)
        {
          strcpy(Peliculas[i].genero,genero[i]);
          return 1;
        }
    }
    return 0;
}


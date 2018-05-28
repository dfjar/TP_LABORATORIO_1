///////////// LIBRERIAS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <time.h>

#include "funciones.h"


int agregarPelicula(EMovie movie)
{

ingresar peliculas a un vector de estructura
traer()

guardarlas en archivo
guardar()

}


void traer(Emovie movies)
{

    int flag=0;
    int seguir='s';
   // int index;
    while (seguir == 's')
        {
         //   index=searchIndexpropietario(propietario, tamanio);
        //    if (index != -1)
            //    {
                printf("\n\n---Ingreso de peliculas ");

                printf("Ingrese el titulo de la pelicula: ");
                fflush(stdin);
                gets(movies[i].titulo);

                printf("Ingrese el genero de la pelicula: ");
                fflush(stdin);
                gets(movies[i].genero);

                printf("Ingrese la duracion de la pelicula: ");
                fflush(stdin);
                scanf("%d",&duracion);

                printf("Ingrese la descripcion de la pelicula: ");
                fflush(stdin);
                gets(movies[i].descripcion);

                printf("Ingrese el puntaje de la pelicula: ");
                fflush(stdin);
                scanf("%d",&puntaje);

                printf("Ingrese el link de la imagen: ");
                fflush(stdin);
                gets(movies[i].linkImagen);

                movies[i].estado=1;
                flag=1;

                seguir= preguntarSiNo( "\t \t Cargar otra pelicula: ? ");
                }
            else
                {
                printf("\n\n\n===========================\n CUPO DE PROPIETARIOS LLENO\n===========================\n");
                break;
                }
        }
        return flag;

}


guardar(Emovies movies);
{
  Emovies d;
  FILE* miArchivo;                                //
                                    //
 // int numero=128;                                     //
 // int otroNumero;                       //
                                                    //
  miArchivo = fopen ("C:\\TEST\\movies.dat","wb");        //escribe
  fwrite(d,sizeof(d),2,miArchivo);
  fclose(miArchivo);

  miArchivo = fopen ("C:\\TEST\\movies.dat","rb");         // lee
  fread(d,sizeof(d),2,miArchivo);
  fclose(miArchivo);

  for(int i=0;i<2;i++)
  printf("%d--%c",d[i].a,d2[i].b);

}







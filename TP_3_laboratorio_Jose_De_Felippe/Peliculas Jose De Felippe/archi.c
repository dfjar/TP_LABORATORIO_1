#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"movie.h"

void crearTxt(eMovie *Peliculas, int tamanio )
{
     int i;
     FILE *f;

     f=fopen("Lista de Peliculas.dat", "wb");

     if(f == NULL)
     {
          printf("No se pudo abrir el archivo\n");
     }
     else
     {
       fprintf(f,"Listado de Peliculas\n\n\n");
       for(i=0; i<tamanio; i++)
            {
              if(Peliculas[i].id != 0)
              {
                fprintf(f,"\n ID: %d  Titulo: %s ", Peliculas[i].id,Peliculas[i].titulo);
                fprintf(f,"\n\t Genero: %s Duracion: %d Puntaje: %d",Peliculas[i].genero,Peliculas[i].duracion,Peliculas[i].puntaje);
                fprintf(f,"\n\t Descripcion: %s  ", Peliculas[i].descripcion);
                fprintf(f,"\n\t Link Imagen: %s  \n", Peliculas[i].link);
                fprintf(f,"\n\t Estado: %d  \n", Peliculas[i].estado);
              }
         }
      }

      fclose(f);

      printf("Creado , Continuar...\n");
      system("pause");
}

int crearArchivoHtml(eMovie *Peliculas, int tamanio )
{
     int i;
     FILE *p;
     p=fopen("prueba.html", "w");

     if(p == NULL)
     {
          printf("No se pudo abrir el archivo\n");
     }
     else
             {
                 fprintf(p,"<!DOCTYPE html><!-- Template by Quackit.com --><html lang='en'><head><meta charset='utf-8'><meta http-equiv='X-UA-Compatible'content='IE=edge'><meta name='viewport'content='width=device-width, initial-scale=1'><!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags --><title>Lista peliculas</title><!-- Bootstrap Core CSS --><link href='css/bootstrap.min.css'rel='stylesheet'><!-- Custom CSS: You can use this stylesheet to override any Bootstrap styles and/or apply your own styles --><link href='css/custom.css'rel='stylesheet'><!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries --><!-- WARNING: Respond.js doesn't work if you view the page via file:// --><!--[if lt IE 9]><script src='https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js'></script><script src='https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js'></script><![endif]--></head><body><div class='container'><div class='row'>");
                 for(i=0; i<tamanio; i++)
                 {
                          if((Peliculas+i)->estado != 0 && (Peliculas+i)->id>=0)
                          {
                          fprintf(p,"<article class='col-md-4 article-intro'><a href='#'><img class='img-responsive img-rounded' src='%s'alt=''></a><h3><a href='#'>%s</a></h3><ul><li>Genero:%s</li><li>Puntaje:%d</li><li>Duracion:%d</li></ul><p>%s</p></article>",Peliculas[i].link,Peliculas[i].titulo,Peliculas[i].genero,Peliculas[i].puntaje,Peliculas[i].duracion,Peliculas[i].descripcion);
                          }
                 }
                 fprintf(p,"</div><!-- /.row --></div><!-- /.container --><!-- jQuery --><script src='.'js/jquery-1.11.3.min.js'></script><!-- Bootstrap Core JavaScript --><script src='js/bootstrap.min.js'></script><!-- IE10 viewport bug workaround --><script src='js/ie10-viewport-bug-workaround.js'></script><!-- Placeholder Images --><script src='js/holder.min.js'></script></body></html>");
              }
        fclose(p);
        printf("-El HTML fue creado con exito\n");

  return 0;
}

int GuardarArchivo(eMovie *Peliculas,int tamanio)
{
    FILE *archivo;

		archivo=fopen("Lista de Peliculas.dat","wb");
		if(archivo== NULL)
		{
			return 1;
		}

	fwrite(Peliculas,sizeof(Peliculas),tamanio,archivo);

	fclose(archivo);

return 0;
}

int cargarDesdeArchivo(eMovie *Peliculas,int tamanio)
{
	FILE *archivo;
	int retorno=0;

	 for(int i=0; i<tamanio; i++)
    {
        (Peliculas+i)->id=0;
    }
	archivo=fopen("Lista de Peliculas.dat", "rb");
	if(archivo==NULL)
	{
		archivo= fopen("Lista de Peliculas.dat", "wb");
		retorno=1;
		if(archivo==NULL)
		{
			retorno=2;
		}
	}
	if(retorno==0)
	{
         while(!feof(archivo))
            {
                fread(Peliculas,sizeof(eMovie),tamanio,Peliculas);
            }
    }

	fclose(archivo);
	return retorno;
}

#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
typedef struct
{
    int estado;
    int id;
    char titulo  [20];
    char genero [20];
    int duracion;
    char descripcion [5000];
    int puntaje;
    char link[5000];
}eMovie ;

int agregarPelicula(eMovie [], int, char []);
int borrarPelicula(eMovie [],int, char []);

int modificarPelicula(eMovie [],int,int, char []);
int buscarVacio(eMovie [], int);
int buscaIdPelicula(eMovie [], int, int);
int listadoPeliculas(eMovie [], int);
int ingresarPeliculas(eMovie [], int);
int ordenarPeliculas(eMovie [],int);
void listaPelicula(eMovie );
void initStruct(eMovie [],int,int);


#endif // MOVIE_H_INCLUDED

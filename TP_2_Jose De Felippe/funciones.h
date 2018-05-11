#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define MAX_ARRAY 20
#define MAX_NOM 50

typedef struct {

    char nombre[MAX_NOM];
    int edad;
    int dni;
    int estado;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

void inicializar_personas(EPersona personas[], int tam);
EPersona leer_persona();
int insertar_persona(EPersona personas[], int tam, EPersona p);
void agregarPersona(EPersona[]);
void borrarPersona(EPersona[]);
void imprimirListaOrdenada(EPersona []);
void imprimirGrafico(EPersona[]);

#endif // FUNCIONES_H_INCLUDED

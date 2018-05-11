#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

void inicializar_personas(EPersona personas[], int tam)
{
  int i;
  for(i=0; i<tam; i++)
  {
  personas[i].nombre[0]='0';
  personas[i].dni=0;
  personas[i].edad=0;
  personas[i].estado=0;
  }
}

void agregarPersona(EPersona personas[])
{
  EPersona p;
  p=leer_persona();
  if(insertar_persona(personas,MAX_ARRAY,p)==1){
     printf(" Persona insertada con exito\n");
     printf("-----------------------------------\n");
    }
  else{
     printf("\nError, la persona no se ha insertado");
     printf("-----------------------------------\n");}
}

EPersona leer_persona()
{
  fflush(stdin);
  EPersona p;
  printf("-----------------------------------\n");
  printf("Introduce el nombre: ");
  gets(p.nombre);                     /* scanf ("%49[\n]%*c", p.nombre);*/
  printf("Introduce el dni: ");
  scanf("%d",&p.dni);
  printf("Introduce la edad: ");
  scanf("%d",&p.edad);
  printf("-----------------------------------\n");
  return p;
}

int insertar_persona(EPersona personas[], int tam, EPersona p)
{
  int indice=obtenerEspacioLibre(personas);
  if(indice!=-1){
  int exito=0,i=0;
  while(i<tam && exito==0)
       {
          if(personas[i].nombre[0]=='0')             //if (strcmp(agenda[i].nombre,"")==0)
          {
           personas[i]=p;
           exito=1;
          }
       i++;
       }
  personas[indice].estado=1;
  return exito;
  }
  else
    {
     printf("No hay espacio para cargar personas");
     return -1;
    }
}

void imprimirListaOrdenada(EPersona personas[]){
    system("cls");

        for(int i=0;i<MAX_ARRAY;i++){
        if (personas[i].estado){
            printf("Nombre: %s\n",personas[i].nombre);
            printf("Edad  : %d\n",personas[i].edad);
            printf("DNI   : %d\n",personas[i].dni);
            printf("-----------------------------------\n");
        }
    }
    for(int i=0;i<MAX_ARRAY;i++){
        for(int j=0;j<MAX_ARRAY;j++){

             if(personas[i].estado && personas[j].estado){
                if(strcmp(personas[j].nombre,personas[i].nombre)>0){
                    char auxNombre[MAX_NOM];
                    strcpy(auxNombre,personas[i].nombre);
                    strcpy(personas[i].nombre,personas[j].nombre);
                    strcpy(personas[j].nombre,auxNombre);

                    int auxEdad;
                    auxEdad=personas[i].edad;
                    personas[i].edad=personas[j].edad;
                    personas[j].edad=auxEdad;

                    int auxDni;
                    auxDni=personas[i].dni;
                    personas[i].dni=personas[j].dni;
                    personas[j].dni=auxDni;
                }
            }
        }
    }
    printf("-----------------------------------\n");
    printf("----------ORDEN--------------------\n");
    printf("-----------------------------------\n");

    for(int i=0;i<MAX_ARRAY;i++){
        if(personas[i].estado){
            printf("Nombre: %s\n",personas[i].nombre);
            printf("Edad  : %d\n",personas[i].edad);
            printf("DNI   : %d\n",personas[i].dni);
            printf("-----------------------------------\n");
        }
     }

}





int buscarPorDni(EPersona personas[], int dni){
    int indice=0;

    do{
        if(personas[indice].dni==dni && personas[indice].estado){
        break;
        }
    }while(++indice<MAX_ARRAY);

    if(indice<MAX_ARRAY){
        return indice;
    }else{
        return -1;
    }

    while(personas[indice].dni!=dni && ++indice<MAX_ARRAY);

    if(indice<MAX_ARRAY){
        return indice-1;
    }else{
        return -1;
    }
}

void borrarPersona(EPersona personas[]){

  fflush(stdin);
  EPersona p;
  int indice;
  printf("-----------------------------------\n");
  printf("Introduce el dni a borrar: ");
  scanf("%d",&p.dni);

    if((indice=buscarPorDni(personas,p.dni))!=-1){
        personas[indice].estado=0;
        printf("Se borro el dni\n");
        printf("-----------------------------------\n");
    }else{
           printf("DNI no encontrado\n");
           printf("-----------------------------------\n");
    }
}

int obtenerEspacioLibre(EPersona personas[]){
    int indice=0;

    while(personas[indice].estado && ++indice<MAX_ARRAY);

    if(indice<MAX_ARRAY){
        return indice;
    }else{
        return -1;
    }
}

void imprimirGrafico(EPersona personas[]){

    int menor=0;
    int entre=0;
    int mayor=0;

    for(int i=0;i<MAX_ARRAY;i++){
        if(personas[i].estado!=0){
            if(personas[i].edad<=18){
                menor++;
            }else if(personas[i].edad>18 && personas[i].edad<35){
                entre++;
            }else{
                mayor++;
            }
        }
    }

    if(menor!=0 || entre!=0 || mayor!=0){
        system("cls");
        printf("-----------------\n");
        printf(" Grafico edades: \n");
        printf("-----------------\n");
        for(int i=MAX_ARRAY;i>=0;i--){
            if((menor-i)>0){
                printf(" *  |");
            }else{
                printf("    |");
            }
            if((entre-i)>0){
                printf("   *   |");
            }else{
                printf("       |");
            }
            if((mayor-i)>0){
                printf("  *");
            }
            printf("\n");
        }
        printf("-----------------\n");
        printf("<18 | 19-35 | >35\n");
    }else{
        printf("-----------------------------------\n");
        printf("No hay personas cargadas!!!\n");
        printf("-----------------------------------\n");
    }
}




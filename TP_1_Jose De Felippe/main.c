#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
#include "funciones.c"


int main()
{
    float num,numero,num2;
    float numdiv,numd;
    float cociente,resultado;
    double factoreo;
    int flag=0;
    int opcion,num1;
 do
  {
    opcion=menu();
    fflush(stdin);
    system("cls");

    switch(opcion)
    {
            case 1:
               printf ("\nIngrese el numero A=x ");
               scanf("%f",&numero);
               num= leerEntero(numero);
               num1= validar(num);
               if(num1==0){
               printf("Reingrese un valor permitido ");}
               flag=1;
               printf("\n");
               system ("\npause");
               system ("cls");
              break;
            case 2:
               if(flag==1){
               printf ("\nIngrese el numero B=y ");
               scanf("%f",&numero);
               num2= leerEntero(numero);
               printf("\n");
               system ("\npause");
               system ("cls");
               }else {
               printf ("\nFalta ingresar el 1er operando (A=x) ");
               printf("\n");}
              break;
            case 3:
               printf ("\nLa opcion elegida es la suma\n");
               resultado=suma (num,num2);
               printf ("\nEl resultado de la suma de %.2f+%.2f es: %.2f",num,num2,resultado);
               printf("\n\n");
               system ("pause");
               system ("cls");
              break;
            case 4:
               printf ("\nLa opcion elegida es la resta\n");
               resultado=resta (num,num2);
               printf ("\nEl resultado de la resta de %.2f-%.2f es: %.2f",num,num2,resultado);
               printf("\n\n");
               system ("pause");
               system ("cls");
              break;
            case 5:
               printf ("\nLa opcion elegida es la division\n");
               numdiv=noCero(num2);
               if (numdiv!=0){
               cociente=division(num,numdiv);
               printf ("\nEl resultado de la division de %.2f/%.2f es: %.2f",num,numdiv,cociente);}
               else printf ("\nNo se puede dividir por cero, reingrese valor ");
               printf("\n\n");
               system ("pause");
               system ("cls");
              break;
            case 6:
               printf ("\nLa opcion elegida es la multiplicacion\n");
               resultado=multiplicacion (num,num2);
               printf ("\nEl resultado de la multiplicacion de %.2f*%.2f es: %.2f",num,num2,resultado);
               printf("\n\n");
               system ("pause");
               system ("cls");
              break;
            case 7:
               printf ("\nLa opcion elegida es el factorial de un numero ");
               printf("\n");
               if(num>=0){
                    factoreo= factorial(num);
                    printf ("\nEl factorial del numero %.2f es: %.2f\n",num,factoreo);
                }else{
                    printf(" El numero tiene que ser positivo ");
                }
               printf("\n\n");
               system ("pause");
               system ("cls");
              break;
            case 8:
               printf ("\nLa opcion elegida ejecuta todas las operaciones\n");

               resultado=suma (num,num2);
               printf ("\nEl resultado de la suma %.2f+%.2f es: %.2f",num,num2,resultado);
               printf("\n\n");

               resultado=resta (num,num2);
               printf ("\nEl resultado de la resta %.2f-%.2f es: %.2f",num,num2,resultado);
               printf("\n\n");

               resultado=multiplicacion (num,num2);
               printf ("\nEl resultado de la multiplicacion de %.2f*%.2f es: %.2f",num,num2,resultado);
               printf("\n\n");

               if (numdiv!=0){
               cociente=division(num,numdiv);
               printf ("\nEl resultado de la division de %.2f/%.2f es: %.2f",num,numdiv,cociente);}
               else printf ("\nNo se puede dividir por cero ");
               printf("\n\n");

               if(num>=0){
                    resultado= factorial(num);
                    printf ("\nEl factorial del numero %.2f es: %.2f\n",num,resultado);
                }else{
                    printf("\nEl numero tiene que ser positivo\n ");

                }
               printf("\n\n");
               system ("pause");
               system ("cls");
              break;
            case 9:
               printf ("\nHas elegido salir de la calculadora\n");
              break;
    }
  }while (opcion!=9);
}



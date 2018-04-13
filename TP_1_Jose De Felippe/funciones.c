#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Funcion Menu

int menu ()
{
        int opcion;
        printf("\n");
        printf("\nTP1 - CALCULADORA ");
        printf("\n\n");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf ("\n");
        printf ("Introduce el numero de la opcion elegida: ");
        scanf ("%i",&opcion);
        return opcion;
}

//Funcion Leer Entero

float leerEntero (float num)
{
float resultado;
resultado=num;
return resultado;
}

//Funcion Suma

float suma (float num1, float num2)
{
float resultado;
resultado=num1+num2;
return resultado;
}

//Funcion Resta

float resta (float num1, float num2)
{
float resultado;
resultado=num1-num2;
return resultado;
}

//Funcion multiplicacion

float multiplicacion (float num1, float num2)
{
float resultado;
resultado=num1*num2;
return resultado;
}

//Funcion Division

float division (float num1, float num2)
{
float resultado;
resultado=(float)num1/num2;
return resultado;
}

//Funcion Factorial

float factorial(float n){

	  if(n==0 || n==1) return 1;
	  else{
		  int n1 =(int)n;
		  if(n-n1)
		  	printf("No es un entero, reingrese numero: ");
		  else
			  return n * factorial(n-1);
  	  }
}


//Funcion No Divide por Cero

int noCero(int j)
{
j= (int)j;

if(j!=0)
  {
   return j;
  }
}

//Funcion validar

int validar(double a)
{
int b;
if (a-(int)a==0)
{
b = 1;
return b;
}
else
{b = 0;
return b;
}
}








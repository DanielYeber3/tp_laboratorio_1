#include <stdio.h>
#include "calculadora.h"
#include <ctype.h>

float getIn(float numero)
{

    if(isdigit(numero))
    {
        printf("\n\n Ingreso una letra enves de un numero, por favor ingrese un numero: \n\n");
        scanf("%f",&numero);

    }
    else
    {
        printf("\n\nIngrese un operando: ");
        scanf("%f",&numero);

    }



    return numero;

}

int suma(float numUno, float numDos)
{
    int resultado;

    resultado= numUno + numDos;

    return resultado;

}

int resta(float numUno, float numDos)
{
    int resultado;

    resultado= numUno - numDos;

    return resultado;

}

int multiplicacion(float numUno, float numDos)
{
    int resultado;

    resultado= numUno * numDos;

    return resultado;

}

float division(float numUno, float numDos)
{
    float resultado;

    if(numUno == 0 || numDos == 0)
    {
        resultado = printf("\nNo es posible dividir por cero \n");

    }
    else
    {

        resultado= numUno / numDos;

    }

    return resultado;

}
long long int factorial(float numero)
{

    int factorial = 1;
    int i = 0;

    if(numero<=0)
    {

        printf("\nNo es posible calcular el factorial de un numero negativo! \n");

    }

    for (i = numero; i > 0; i--)
    {
        factorial = factorial * i;
    }

    return factorial;
}

#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"



int main()
{
    float numUno;
    float numDos;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    int resultadoFactorialUno;
    int resultadoFactorialDos;
    int respuesta;


    do
    {



        printf("Bienvenido al menu. \n1: Ingrese el primer operando \n2: Ingrese el segundo operando \n3: Calcular todas las operaciones \n4: Informar resultados \n5: Salir \n");

        printf ("Ingrese un numero: ");
        scanf ("%d", &respuesta);

        switch (respuesta)
        {
        case 1:

            numUno = getIn(numUno);



            break;
        case 2:

            numDos = getIn(numDos);


            break;
        case 3:

            resultadoSuma=suma(numUno,numDos);
            resultadoResta=resta(numUno,numDos);
            resultadoDivision=division(numUno,numDos);
            resultadoMultiplicacion=multiplicacion(numUno,numDos);
            resultadoFactorialUno= factorial(numUno);
            resultadoFactorialDos= factorial(numDos);



            break;
        case 4:
            printf("\n\nEl resultado de %2.f + %2.f es: %f \n", numUno, numDos, resultadoSuma);
            printf("El resultado de %2.f - %2.f es: %f \n", numUno, numDos, resultadoResta);
            printf("El resultado de %2.f * %2.f es: %f \n", numUno, numDos, resultadoMultiplicacion);
            printf("El resultado de %2.f / %2.f es: %f \n", numUno, numDos, resultadoDivision);
            printf("El factorial del primero numero es: %d \n", resultadoFactorialUno);
            printf("El factorial del segundo numero es: %d \n\n\n\n", resultadoFactorialDos);

            break;
        case 5:

            break;

        default:
            printf("El numero ingresado no esta dentro de los parametros de medicion \n");

            break;



        }


    }
    while(respuesta!=5);

}

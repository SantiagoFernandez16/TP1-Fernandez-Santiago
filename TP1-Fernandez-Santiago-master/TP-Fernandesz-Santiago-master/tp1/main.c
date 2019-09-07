#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int main()
{
    int A; //1er numero
    int B; //2do numero
        printf("**********************************************\n");
        printf("***  1- Ingresar 1er Numero                ***\n");
        printf("***  2- Ingresar 2do Nmero                 ***\n");
        printf("***  3- Suma                               ***\n");
        printf("***  4- Resta                              ***\n");
        printf("***  5- Division                           ***\n");
        printf("***  6- Multiplicacion                     ***\n");
        printf("***  7- Factorial                          ***\n");
        printf("***  8- Resultado de todas las operaciones ***\n");
        printf("***  9- Salir                              ***\n");
        printf("**********************************************\n");
    int option=0;//la operacion que se quiere realizar
    char continuar='s'; //si desea continuar usando la calculadora
    while(continuar=='s')
    {
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                utn_getInt(&A,"Ingrese primer numero: ","Incorrecto\n");
                break;
            case 2:
                utn_getInt(&B,"Ingrese segundo numero: ","Incorrecto\n");
                break;
            case 3:
                utn_sum(A,B,"La suma es: ");
                break;
            case 4:
                utn_substraction(A,B,"La resta es: ");
                break;
            case 5:
                utn_division(A,B,"La division es: ","No se divide por 0\n");
                break;
            case 6:
                utn_multiplication(A,B,"La multiplicacion es: ");
                break;
            case 7:
                utn_factorial(A);
                printf("El factorial de %d es: %d\n",A ,utn_factorial(A));
                break;
            case 8:
                utn_calculateAllOperations(A,B);
                printf("El factorial de %d es: %d\n",A ,utn_factorial(A));
                break;
            case 9:
                continuar = 'n';
                printf("\nAdios\n");
                break;
        }//fin del switch
    }//fin del while
    return 0;
}

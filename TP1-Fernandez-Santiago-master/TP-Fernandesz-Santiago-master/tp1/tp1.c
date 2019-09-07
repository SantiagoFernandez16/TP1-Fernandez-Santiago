#include <stdio.h>
/**
*\brief Le pide un numero al usuario en un rango determinado
*\param Puntero que guarda la dirección de memoria de la variable entera
*\param Numero Máximo
*\param Numero Minimo
*\param Mensaje para ingresar un numero
*\param Mensaje de error si el dato ingresado es incorrecto
*\return 0 si esta correcto, -1 si está incorrecto
*/
int utn_getNumberRanged(int *pNumber, int max, int min, char* msg, char* msgError, int tries)
{
    int number;
    int ret = -1;
    while(tries>0)
    {
        printf("%s",msg);
        if (scanf("%d", &number)==1)
        {
            if (number>min && number<max)
            {
                *pNumber = number;
                ret = 0;
                break;//correcto
            }
    }
    printf("%s\n", msgError);//incorrecto
    tries--;
}
return ret;
}
/**
*\brief Se le pide un numero entero a usuario
*\param Puntero que guarda la dirección de memoria de la variable entera
*\param Mensaje para ingresar un numero
*\param Mensaje de error si el dato ingresado no corresponde
*\return 0 si esta correcto, -1 si está incorrecto
*/
int utn_getInt(int *pNum, char* msg, char* msgError)
{
    int number;
    int ret = -1;
    do
    {
        printf("%s",msg);
        if (scanf("%d", &number)==1)
        {
            *pNum=number;
            ret=0;
        }
        else
        {
            printf("%s",msgError);
        }
        fflush(stdin);//ffpurge/stdin);
    } while(ret==1);
    return ret;
}
/**
*\brief Se le pide un numero flotante al usuario
*\param Puntero que guarda la dirección de memoria de la variable entera
*\param Mensaje para ingresar un numero
*\param Mensaje de error si el dato ingresado no corresponde
*\return 0 si esta correcto, -1 si está incorrecto
*/
int utn_getFloat(float *pNum, char* msg, char* msgError)
{
    float number;
    int ret = -1;
    do
    {
        printf("%s",msg);
        if (scanf("%f", &number)==1)
        {
            *pNum=number;
            ret=0;
        }
        else
        {
            printf("%s",msgError);
        }
    } while(ret==1);
    return ret;
}
/**
*\brief Realiza el factorial del numero ingresado
*\param Primer entero ingresado
*\return Resultado de la operación
*/
int utn_factorial(int numberA)
{
    int result;
    if(numberA == 1)
    {
        result = 1;
    }
    result = numberA * utn_factorial(numberA - 1);
    return result;
}
/**
*\brief Realiza la suma de dos números
*\param Primer entero ingresado
*\param Segundo entero ingresado
*\return Resultado de la operación
*/
int utn_sum(int numberA, int numberB, char* msg)
{
    int result;
    result = numberA+numberB;
    printf("%s%d\n",msg,result);
    return 0;
}
/**
*\brief Realiza la resta entre dos números
*\param Primer entero ingresado
*\param Segundo entero ingresado
*\return Resultado de la operación
*/
int utn_substraction(int numberA, int numberB, char* msg)
{
    int result;
    result = numberA-numberB;
    printf("%s %d\n",msg,result);
    return 0;
}
/**
*\brief Realiza la multiplicación entre dos números
*\param Primer entero ingresado
*\param Segundo entero ingresado
*\return Resultado de la operación
*/
int utn_multiplication(int numberA, int numberB, char* msg)
{
    int result;
    result = numberA*numberB;
    printf("%s%d\n",msg,result);
    return 0;
}
/**
*\brief Realiza la división entre dos números
*\param Entero ingresado
*\param Segundo entero ingresado
*\param Mensaje de error si el divisor llegase a ser 0
*\return Resultado de la operación
*/
float utn_division(int numberA, int numberB, char* msg, char* msgError)
{
    float result;
    if(numberA != 0 && numberB != 0)
    {
        result = numberA/numberB;
        printf("%s%.2f\n",msg, result);
    }
    else if(numberA == 0)
    {
        result = 0;
        printf("%s%.2f\n",msg, result);
    }
    else
    {
        if(numberB == 0)
        {
            printf("%s\n", msgError);
        }
    }
    return 0;
}
 /**
*\brief se calculan todos los resultados
*\return resultado de las operaciones
*/
float utn_calculateAllOperations(int numberA, int numberB)
{
    utn_sum(numberA,numberB,"La suma es: ");
    utn_substraction(numberA,numberB,"La resta es: ");
    utn_division(numberA,numberB,"La division es: ","No se permite la division por 0");
    utn_multiplication(numberA,numberB,"La multiplicacion es: ");
    utn_factorial(numberA);
    return 0;
}

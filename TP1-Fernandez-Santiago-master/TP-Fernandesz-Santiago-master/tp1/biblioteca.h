#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int utn_sum(int numberA, int numberB, char* msg); //operacion suma
int utn_substraction(int numberA, int numberB, char* msg);//operacion resta

int utn_multiplication(int numberA, int numberB, char* msg);//operacion multiplicacion
float utn_division(int numberA, int numberB, char* msg, char* msgError);//operacion division

int utn_getInt(int *pNum, char* msg, char* msgError);//numeros enteros
int utn_getFloat(float *pNum, char* msg, char* msgError);//numeros con decimales
int utn_factorial(int numberA);//operacion factorial
float utn_calculateAllOperations(int numberA, int numberB);//calculo de todas las operciones
#endif // FUNCIONES_H_INCLUDED

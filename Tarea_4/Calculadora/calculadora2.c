#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SALIR 0
#define NUEVO 100
#define SUMAR 1
#define DIVIDIR 2
#define MULTIPLICAR 3
#define RESTAR 4
#define RAIZ 5

#define ERR_DivByZero 100
#define ERR_OK 0

int sumar(float num1, float num2, float *result);
int dividir(float numerador, float denominador, float *result);
int multiplicar(float num1, float num2, float *result);
int restar(float num1, float num2, float *result);
int raiz(float num1, float *result);
int main()
{
    int menu = NUEVO;
    int cod_err = ERR_OK;
    float num1 = 0.0;
    float num2 = 0.0;
    float result = 0.0;

    do {
        printf("\n0-Salir\n1-Sumar\n2-Dividir\n3-Multiplicar\n4-Restar\n5-Raiz\n");
        scanf("%i", &menu);

        if(menu == SUMAR)
        {
            printf("\nEscriba el primer numero a sumar: ");
            scanf("%f", &num1);

            printf("\nEscriba el segundo numero a sumar: ");
            scanf("%f", &num2);

            cod_err = sumar(num1, num2, &result);

            if (cod_err != ERR_OK)
                printf("\nError en la suma");
            else
                printf("\nSuma de %f + %f es: %f\n", num1, num2, result);
        }
        else if(menu == DIVIDIR)
        {
            printf("\nEscriba el numerador: ");
            scanf("%f", &num1);

            printf("\nEscriba el denominador: ");
            scanf("%f", &num2);

            cod_err = dividir(num1, num2, &result);

            if (cod_err == ERR_DivByZero)
                printf("\nError division por cero========\n");
            else
                printf("\nDivision de %f / %f es: %f\n", num1, num2, result);
        }

    if(menu == MULTIPLICAR)
        {
            printf("\nEscriba el primer numero a multiplicar: ");
            scanf("%f", &num1);

            printf("\nEscriba el segundo numero a multiplicar: ");
            scanf("%f", &num2);

            cod_err = multiplicar (num1, num2, &result);

            if (cod_err != ERR_OK)
                printf("\nError en la multiplicacion");
            else
                printf("\nmultiplicacion de %f * %f es: %f\n", num1, num2, result);
        }
    
if(menu == RESTAR)
        {
            printf("\nEscriba el primer numero a restar: ");
            scanf("%f", &num1);

            printf("\nEscriba el segundo numero a restar: ");
            scanf("%f", &num2);

            cod_err = restar (num1, num2, &result);

            if (cod_err != ERR_OK)
                printf("\nError en la resta");
            else
                printf("\nresta de %f - %f es: %f\n", num1, num2, result);
        }

        if(menu == RAIZ)
        {
            printf("\nEscriba el numero: ");
            scanf("%f", &num1);

            cod_err = raiz (num1, &result);

            if (cod_err != ERR_OK)
                printf("\nError en la raiz");
            else
                printf("\nRaiz de %f es: %f\n", num1, result);
        }
    

    } while(menu != SALIR);

    return 0;
}

int sumar(float num1, float num2, float *result)
{
    *result = num1 + num2;
    return ERR_OK;
}

int dividir(float numerador, float denominador, float *result)
{
    if (denominador == 0)
        return ERR_DivByZero;

    *result = numerador / denominador;
    return ERR_OK;
}

int multiplicar(float num1, float num2, float *result)
{
    *result = num1 * num2;
    return ERR_OK;
}
int restar(float num1, float num2, float *result)
{
    *result = num1 - num2;
    return ERR_OK;
}
int raiz(float num1, float *result)
{
    *result = sqrt(num1);
     return ERR_OK;
}
//☺ ☺ ☺ ☺
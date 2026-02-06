#include <stdio.h>
#include <math.h>
/* Suma cuadrados.
El programa, al recibir como dato un grupo de enteros positivos, obtiene el
cuadrado de los mismos y la correspondiente a dichos cuadrados.*/

void main(void)
{

    int NUM;
    long CUA, SUC = 0;
    printf("\nIngrese un número entero -0 para terminar-:\t");
    scanf("%d", &NUM);
    while (NUM)
    //observa que la condición es verdadera mientras el entero es diferente de cero.
    {
        CUA = pow (NUM, 2);
        printf("%d al cubo es %ld", NUM, CUA);
        SUC = SUC + CUA;
        printf("\nIngrese un númeroo entero -0 para terminar-:\t");
        scanf("%d", &NUM);
    }
    printf("\nLa suma de los cuadrados es %d", SUC);
}
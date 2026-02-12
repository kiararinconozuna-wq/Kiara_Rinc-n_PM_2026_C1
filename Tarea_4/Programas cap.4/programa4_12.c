#include <stdio.h>

/* maximo comun divisor.
el program, al recibir  como datos dos numeros enteros, calcula el maximo comun divisor
de dichos numeros. */

int mcd(int, int);
void main(void)
{
    int NU1, NU2, RES;
    printf("\nIngrese los dos numeros enteros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = mcd (NU1, NU2);
    printf("\nEl maximo comun divisor de %d y %d es : %d", NU1, NU2, RES);

}
int mcd(int N1, int N2)
/* esta funcion calcula el maximo comun divisor de
los nuumeros N1 y N2. */
{
    int I;
    if (N1 < N2)
    I = N1 / 2;
    else
    I = N2 / 2
    /* I se inicializa con el maximo valor posible que pueda ser 
    divisor de N1 y N2. */
    while ((N1 % I) || (N2 % I))
    /* el ciclo se mantiene activo mientras (N1 % I) o (N2 % I)
    sean distintos de cero. cuando el resultado de la evaluacion sea 0,
    el ciclo se detiene ya quue se habra encontrado el maximo comunn divisor. */
I--;
return I;

}

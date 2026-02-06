#include <stdio.h>

/* Lanzamiento de martillo.
El programa, al recibir como dato N lanazamiento de martillo,
calcule el promedio de los lanzamientos de la atleta cubana.

I, N: variables de tipo entero.
LAN, SLA: Variable de tipo real*/
void main(void)
{
    int I, N;
    float LAN, SLA = 0;
    do
    {
       printf("ingresa el número de lanzamientos: \t");
       scanf("%d", &N);

    } while (N < 1  ||  N > 11);
    /* Se usa la estructura do-while para verificar que el valor
    de N sea  correcto. */
    for (I=1; I<=N; I++)
    {
        printf("\nIngrese el lanzamiento %d: ", I
        );
        scanf("%f", &LAN);
        SLA = SLA + LAN;

    }
    SLA = SLA / N;
    printf("\nEl promedio de lanzamiento es: %.2f", SLA);
}
#include <stdio.h>

/* Suma pagos.
El programa al recibir como datos un conjunto de pagos realizados en el ultimo
mes, obtiene la suma de los mismos.

PAG y SPA: Variables de tipo real. */

void main (void)
{
    float PAG, SPA;
    SPA = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);
    while (PAG)
    //observa que la condicion es verdadera mientras el pago es diferente de cero.
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente pago:\t ");
        scanf("%f", &PAG);
        //observa que la proposición que modifica la condición es una lectura.

}
printf("\nEl total de pago del mes es: %.2f", SPA);
}
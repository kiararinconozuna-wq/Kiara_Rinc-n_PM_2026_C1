#include <stdio.h>
/*Nóminal.
El programa al recibir los salarios de 15
profesores, obtienen el total de la nómina de la universidad.

I: Variable de tipo entero
SAL Y NOM: variable de tipo real.*/

void main (void)
{

    int I;
    float SAL, NOM;
    NOM = 0;
    for (I=1; I<=15; I++)
    {
        printf("\nIngrese el salario del profesor %d:\t", I);
        scanf("%f", &SAL); 
        NOM = NOM  + SAL;

    }
    printf("\nEl total de la nomina es: %.2f", NOM);
}
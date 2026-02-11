#include <stdio.h>
/* Cubo--3.
El programa calcula el cubo de los 10 primeros números naturales con la ayuda
de una funcion y utilizando parámetros por valor.*/

int cubo(int); /* prototipo de función. El parámetro 
es de tipo entero. */

void main (void)
{
    int I;
    for (I = 1; I <= 10; I++)
    printf("\nEl cubo de I es: %d", cubo(I));

/* llamada a la función cubo. El paso del parámetro es por valor. */

}

int cubo(int K)   /* K es unn parametro por valor de tipo entero. */
/* Ls función calcula el parámetroo K. */
{
    return (K*K*K);
}
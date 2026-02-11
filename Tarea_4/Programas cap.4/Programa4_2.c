#include <stdio.h>
/*cubo-2.
El programa calcula el cubo de los 10 primeros números naturales con la ayuda de una función. */

int cubo(void);   /* prototipo de funcion. */
int I;           /* variable global*/

void main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)

    {
        CUB = cubo();  /* llamada a la funcion cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);

    }
}
int cubo(void)     /* Declaración de la función. */
/* La funcón calcula el cubo de la variable local I. */
{
    int I = 2  /* Variable loocal entera I con el mismo nombre que la variables global.
    */
   return (I*I*I);
}
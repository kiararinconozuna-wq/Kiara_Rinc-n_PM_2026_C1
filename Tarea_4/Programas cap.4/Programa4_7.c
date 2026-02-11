#include <stdio.h>
/* Prueba de parametro por valor. */
int f1 (int)         /* prototipo de función. el parametro
                 es por valor y de tipo entero*/

void main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
         printf("\nValor de K antes de llamar a la función: %d", K++);
        
        printf("\nValor de K despues de la llamada a la funnción: %d", f1 (K));
   
    }
}
int f1(int R)
{
    R += R;
    return (R);
}
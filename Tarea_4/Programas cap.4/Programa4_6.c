#include <stdio.h>
/* Prueba de parámatro por referencia. */
void f1(int *);

/* Prototipo de función. El parámetro es de tipo entero yy por  referencia - observa el uso
del operador de indireciones. */

void main(void)
{
    int I, K = 4;
    for (I = 1; I <=3; I++)
    {
        printf("\nValor de K antes de llamar a la función: %d", ++K);
    printf("\nValor de K despues de llamar a la función: %d", f1(&K));
/*llamada a la función f1. se pasa la direccion ce la variables K,
por medio del operador de direcciones: &. */
    }
    
}
void f1(int *R)

/* La función f1 recibe un parámetro por referencia. cada vez que  el

parámetro se utiliza en la función debe ir precedido por el operador
de indireccion. */

{ 
    *R += *R;
}
#include <stdio.h>

/* Mayor divisor.
El programa, al recibir como dato un nuemro entero positivo, cslcula
su mayor divisor. */
int mad(int);
void main(void)
{
    int NUM, RES;
    printf("\nIngrese el numero: ");
    scanf("%d", &NUM);
    RES = mad (NUM);
    printf("\nEl mayor divisor de %d es : %d", NUM, RES);

}
iint mad(int N1)
/* Esta funcion calcula el mayor diviisor del numero N1. */
{
    int I = (N1 / 2);
    /* I se inicializa con el maximo valor posible que
     puede ser divisor de N1. */
     while (N1 % I)
     /* el ciclo se acttivo  mientras (N1 % I) sea distinto de cero.
     cuando el resultado sea 0, se detiene, ya que se habra enncontrado 
     el mayor divisor  de N1. */
     I--;
     return I;
}


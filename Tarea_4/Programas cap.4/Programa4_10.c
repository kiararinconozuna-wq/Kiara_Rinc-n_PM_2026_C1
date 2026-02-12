#include <stdio.h>

/* Múltiplo.
El program, al recibir como datos dos numeros enteros, determina si
el seggundo es multiplo de primero. */
int multiplo(int, int); /* prototipo de función. */

void main(void)
{
    int NU1, NU2, RES;
    printf("\nIngrese los dos numeros: ")
    scanf("%d %d", &NU1, &NU2);
    RES = multiplo(NU1, NU2);
    if (RES)
    printf("\nEl segundo numero es multiplo del primero");
    else
    printf("\nEl segundoo numero no es multiplo del rpimero");

}
int multiplo(int N1, int N2)
/* Esta funcion determina si N2 es multiplo de N1. */

{
    int RES;
    if ((N2 % N1) == 0)
    RES = 1;
     else
     RES = 0
return (RES);
}

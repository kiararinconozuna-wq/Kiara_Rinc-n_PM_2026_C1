/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
/* Igualda de expresiones
El problema, al recibir como datos T, P y N, comprueba la igualdad de una expresión
determinada.

T, P y N: variables de tipo entero.
 */

void main(void)
{
    int T, P, N;
    printf("Ingrese los valores de T, P y N: ");
    scanf("%d %d %d", &T, &P, &N);
    if (P != 0)
    {
        if (pow(T / P, N) == (pow(T, N) / pow(P, N)))
        printf("\nSe comprueba la igualdad");
        else 
        printf("\nNo se comprueba la igualdad");
    }
    else
    printf("\nP tiene que ser diferente de 0");

}
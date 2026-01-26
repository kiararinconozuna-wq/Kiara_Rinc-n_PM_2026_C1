/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

/*Expresion.
El programa, al recibir como datos tres valores enteros, establece si los mismos
satisfacen una Expresion determinada.

R, T y Q: variables de tipo entero.
RES: variable de tipo real. */

void main(void)
{
    float RES;
    int R, T, Q;
    printf("Ingrese lo valores de R, T, Q: ");
    scanf("%d %d %d", &R, &T, &Q);
    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q,2);
    if (RES < 820) {
    printf("\nR = %d\tT = %d\tQ = %d", R, T, Q);
    }
}

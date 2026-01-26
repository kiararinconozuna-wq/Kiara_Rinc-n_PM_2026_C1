/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
/* Función.
El programa, al recibir como dato un valor entero, calcula el resultado de una función.

Y: Variable de tipo entero
X: variable de tipo real.
 */

void main(void)
{
    float X;
    int Y;
    printf("Ingrese el valor de Y: ");
    scanf("%d", &Y);
    if (Y <= 10)
     X = 4 / Y - Y;
     else 
     if (Y <= 25)
     X = pow(Y, 3) - 12;
     else
     X = pow(Y, 2) + pow(Y, 3) - 18;
     printf("\n\nY = %d\tX = %8.2f", Y, X);
}
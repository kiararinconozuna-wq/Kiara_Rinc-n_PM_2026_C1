/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

/* Función matemática.
El programa obtiene el resultado de una Función.

OP y T:variable de tipo entero.
RES: variable de tipo real. */

void main(void)
{
    int OP, T;
    float RES;
    printf("ingrese la opción del cálculo y el valor entero: "); 
    scanf("%d %d", &OP, &T);
    switch(OP)
    {
        case 1: RES = T / 5;
        break;
        case 2: RES = pow(T,T);
        /* La función pow esta definida en la biblioteca de math.h */
        break;
        case 3:
        case 4: RES = 6 * T/2;
        break;
        default: RES = 1; 
        break;
        
    }
printf( "\nResultado:  %7.2f", RES);
}
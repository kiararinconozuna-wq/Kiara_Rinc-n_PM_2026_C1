/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

/* Par, impar o nulo.

NUM: variable de tipo entero.
 */

void main(void)
{
    int NUM;
    printf("Ingrese el número: ");
    scanf("%d", &NUM);
    if (NUM ==0)
    printf("\nNulo");
else
  if (pow (-1, NUM) > 0)
    printf("\nPar");
else 
printf("\nImpar");
}
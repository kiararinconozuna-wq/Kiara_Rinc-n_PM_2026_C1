/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/* Ventas decentes.
El programa, al recibir como datos tres valores que representan las ventas de los 
vendedores de una tienda de discos, escribe las ventas en orden decentes.

P, S y R: Variables de tipo real.  */

void main(void)
{ 
    float P, S, R;
    printf("\nIngrese las vrntas de los tres vendedores: ");
    scanf("%f %f %f", &P, &S, &R);
    if (P > S)
     if (P > R)
      if (S > R)
      printf("\n\n el orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
      else
      printf ("\n\n el orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);
      else 
      printf("\n\n el orden es R, P Y S: %8.2f %8.2f %8.2f", R, P, S);
      else 
       if (S > R)
        if (P > R)
        printf("\n\n el orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);
       else
       printf("\n\n el orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
       else
       printf("\n\n el orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);
}
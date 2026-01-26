/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/* Incremento de precio.
El programa al recibir como dato el precio de un producto, incrementa al mismo 11%
si es menor a 1500$ y 8% en caso contrario (mayor o igual)

PRE NPR: variables de tipo real. */

void main(void)
{
    float PRE, NPR;
    printf("Ingrese el precio de producto: ");
    scanf("%f", &PRE);
    if(PRE < 1500)
    NPR = PRE * 1.11;
  
     else
     NPR = PRE * 1.08;
      printf("\nNuevo precio del producto: %8.2f", NPR);
  
}
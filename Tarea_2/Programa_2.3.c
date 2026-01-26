/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso universitario,
escribe aprobado si su promedio es mayor o igual a 6, o reprobado en caso contrario

PRO: variable de tipo real.  */

void main(void)
{
    float PRO;
    printf("ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    if(PRO >= 6.0)
  
     printf("\nAprobado");
     else
      printf("\nReprobado");
  
}
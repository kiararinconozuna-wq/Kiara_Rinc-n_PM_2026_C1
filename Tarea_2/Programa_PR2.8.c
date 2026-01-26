/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/*  Empresa textil.
El programa, al recibir como datos decisivos la categoria y antiguedad de un empleado
determina si el mismo reúne las condiciones establecidas por la empresa para ocupar 
un nuevo cargo en una sucursal.

CLA, CAT, ANT, RES: Variables de tipo entero
SAL: variable de tipo real.
 */

void main(void)
{
    int CLA, CAT, ANT, RES;
    printf("\nIngrese la clave, categoría y antiguedad: ");
    scanf("%d %d %d", &CLA, &CAT, &ANT);
    switch(CAT)
    {
        case 3:
        case 4: if (ANT >= 5)
        RES = 1;
        else
        RES = 0;
        break;
        case 2: if (ANT >= 7)
        RES = 1;
        else
        RES = 0;
        break;
        default: RES = 0;
        break;
    }
    if (RES)
    printf("\nEl trabajador con clave %d reúne la condición para el puesto", CLA);
    else
    printf("\nEl trabajor con clave %d no reúne las condiciones para el puesto", CLA);
   
}
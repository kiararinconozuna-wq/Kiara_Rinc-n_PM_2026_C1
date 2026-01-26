/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/* Incremento de salario.
El programa al recibir como dato el nivel de un profesor, incrementa su salario en 
funcion de la tabla 2.3.

NIV: variable de tipo entero.
SAL: variable de tipo real. */

void main(void)
{ 
    float SAL;
    int NIV;
    printf("Ingrese el nivel académico del profesor: ");
    scanf("%d", &NIV);
    printf("Ingrese el salario:  ");
    scanf("%f", &SAL);
    switch(NIV)
    
    {
        case 1: SAL = SAL * 1.0035; break;
        case 2: SAL = SAL * 1.0041; break;
        case 3: SAL = SAL * 1.0048; break;
        case 4: SAL = SAL * 1.0053; break;
    }
    printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL);
}
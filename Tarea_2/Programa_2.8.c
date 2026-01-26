/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/* Asistentes.
El programa, al recibir como dato la matrícula, la carrera, el semestre y el promedio 
de un alumno de una universidad privada, determina si este puede ser asistente de su carrera.
MAT, CAR Y SEM: Variable de tipo entero.
PRO: variable de tipo real. */

void main(void)
{
    int MAT, CAR, SEM;
    float PRO;
    printf("Ingrese matrícula: ");
    scanf("%d", &MAT);
    printf("Ingrese carrera (1-Industrial 2-Telemática 3-Computacíon 4-Mecánica) : ");
    scanf("%d", &CAR);
    printf("Ingrese semestre: ");
    scanf("%d", &SEM);
    printf("Ingrese el promedio: ");
    scanf("%f", &PRO);
    switch(CAR)
     {
         case 1: if (SEM >= 6 && PRO >= 8.5)
          printf("\n%d %d %5.2f", MAT, CAR, PRO);
            break;
        case 2: if (SEM >= 5 && PRO >=9.0)
          printf("\n%d %d %5.2f", MAT, CAR, PRO);
            break;
        case 3: if (SEM >= 6 && PRO >= 8.8)
          printf("\n%d %d %5.2f", MAT, CAR, PRO);
            break;
        case 4: if (SEM >= 7 && PRO >= 9.0)
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
            break;
            default: printf("\n Error en la carrera");
            break;
}
}


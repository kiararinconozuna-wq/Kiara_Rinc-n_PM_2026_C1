/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/* Spa. 
El programa, al recibir como datos el tipo de tratamiento, la edad y el numero de dias 
de internación de un cliente en un spa, calcula el costo total del tratamiento.
TRA, EDA, DIA: Variables de tipo entero.
Cos: variable de tipo real.
 */

void main(void)
{
    int TRA, EDA, DIA;
    float COS;
    printf("Ingrese tipo de tratamiento, edad y días: ");
    scanf("%d %d %d", &TRA, &EDA, &DIA);
    switch(TRA)
     {
         case 1: COS = DIA * 2800; break;
         case 2: COS = DIA * 1950; break;
         case 3: COS = DIA * 2500; break;
         case 4: COS = DIA * 1150; break;
         default: COS = -1; break;
     }
     if (COS != -1)
     {
         if (EDA >= 60)
         COS = COS * 0.75;
         else
         if (EDA <= 25)
          COS = COS * 0.85;
          printf("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f",
          TRA, DIA, COS);
     }
     else
     printf("\nLa clave del tratamiento es incorrecta");
   
}
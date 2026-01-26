/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/* Telefono.
El programa, al recibir como datos la clave de la zona geográfica y el numero de segundos
de una llamada telefónica, calcula el costo de la misma.

CLA y TIE: variable de tipo entero.
COS: variable de tipo real.
 */

void main(void)
{
    int CLA, TIE;
    float COS;
    printf("Ingrese la clave y el tiempo: ");
    scanf("%d %d", &CLA, &TIE);
    switch (CLA)
    {
        case 1: COS = TIE * 0.13 / 60; break; 
         case 2: COS = TIE * 0.11 / 60; break; 
          case 5: COS = TIE * 0.22 / 60; break; 
           case 6: COS = TIE * 0.19 / 60; break; 
            case 7:
             case 9: COS = TIE * 0.17 / 60; break; 
              case 10: COS = TIE * 0.20 / 60; break; 
               case 15: COS = TIE * 0.39 / 60; break; 
                case 20: COS = TIE * 0.28/ 60; break; 
                
    }
    if (COS != -1)
     printf("\n\nClave: %d\tiempo: %d\tCosto: %6.2f", CLA, TIE, COS);
     else 
     printf("\nError en la clave");
    
   
}
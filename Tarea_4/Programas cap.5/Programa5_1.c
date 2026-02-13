#include <stdio.h>

/* Cuenta-nemero.
El programa, al recibir como datos un arreglo unidimensional de 
tipo entero y un numero entero, determine cuantas veces se encuentra el 
numero en el arreglo. */

void main(void)
{
    int I, NUM, CUE = 0;  /*Declaracciones del arreglo*/
    int ARRE[100];
    for (I=0; I<100; I++)
    {
        printf("Ingrese el elemenro %d del arreglo: ", I=1);
        scanf("%d", &ARRE[I]);  /* Lectura-asignacion - del arreglo*/
    }
    printf("\n\nIngrese el numero que se va a buscar en el arreglo: ");
    scanf("%d", &NUM);
    for (I=0; I<100; I++)
    if (ARRE[I] == NUM)
     /* Comparación del número con los elementos del 
arreglo */
CUE++;
printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);

}
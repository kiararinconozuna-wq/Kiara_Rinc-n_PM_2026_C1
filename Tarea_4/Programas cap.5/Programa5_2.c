#include <stdio.h>

/* Elección.
El programa almacena los votos emitidos en una elección en la que hubo cinco
candidatos e imprime el total de votos que obtuvo cada uno de ellos. */

int main(void)
{
    int ELE[5] = {0};  /*Declaracion del arreglo entero ELE de cinco elementos.
    sus elementos se inicializan en 0. */
    int I, VOT;
    printf("ingresa el primer voto (0 - para terminar): ");
    scanf("%d", &VOT);
    while (VOT)
    {
        if ((VOT > 0) && (VOT < 6))  /* se verifica que el voto sea correcto. */
        ELE[VOT-1]++;   /* Los votos se almacenan en el arreglo. 
        recuerda que la primera pposicion del arreglo es  0, por esa razón a la variable VOT
        se le descuenta 1. los  votos del primer candidato se almacenan en l posicion 0.*/

        else
        printf("\nEl voto ingresado es incorrecto.\n");
            printf("ingresa el primer voto (0 - para terminar): ");
            scanf("%d", VOT);

    }
    printf("\n\nResultados de la Elección\n");
    for (I = 0; I <= 4; I++)
    printf("\nCandidato %d: %d", I+1, ELE[I]);
}


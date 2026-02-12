#include <stdio.h>
/* paso de una funcion como parámetros por referencia. */

int Suma(int X, int Y)
/* La funcion Suma regresa la suma de los parámetros de tipo entero
X y Y*/
{
    return (X+Y);
}
int Resta(int X, int Y)
/* Esta funcion regresa la resta de los parámetros de tipo entero 
X y Y. */
{
    return (X-Y);
}
int Control (int (*apf) (int, int), int X, int Y)
/* Esta funcion recibe como parámetros otra funcion -la direccion- y
depediendo de cual sea esta, llamada a la
funcion Suma o Resta. */
{
    int RES;
    RES = (*apf) (X, Y); /* Se llama a la funcion Suma o Resta. */
    return (RES);
}
void main(void)
{


int R1, R2; 
R1 = Control(Suma, 15, 5); /*SSe pasa como parámetros la funcion Suma*/
R2 = Control(Resta, 10, 4); /* Se pasa parametro la funcion Resta*/
printf("\nResultado 1: %d", R1);
printf("\nResultado 2: %d", R2);



}
#include <stdio.h>


/*Archivos con variables enteras y reales.
El programa lee informacion de los alumnos de una escuela, almacenada en un archivo
utiliza una funcion para realizar la lectura, pero el archivo se abre y cierra desde el programa principal*/

void promedio(FILE *);
/*Prototipo de funcion, se pasa un archivo como parametro. */

void main(void){
    FILE *ar;
    if((ar =fopen("arc9.txt", "r")) != NULL);
    {
        promedio(ar); /* se llama a la funcion promedio. observe la forma como se pasa 
        el archivo como parametro*/

        fclose(ar);

    }
    else
    printf("No se puede abrir el aarchivo");

}
void primedio(file *ar1) /*observa la forma como se recibe el rchivo.
esta funcion lee los datos de los alumnos desde un archivo e imprime tanto
la matricula como el promedio de cada alumno. */
{
    int i, j, mat;
    float pro, cal;
    fscanf(ar1, "%d", &n);
    for (i=0; 1<n; i++)
    {
       fscanf(ar1, "%d", &mat);
       printf("%d\t", mat);
       pro = 0;
       for(jj=0; j < 5; j++)
       {
        fscanf(ar1, "%f", cal);
        pro += cal,

       }
       printf("\t %.2f", pro/5);
       printf("\n");
    }
}
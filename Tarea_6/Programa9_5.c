#include <stdio.h>
/*Archivos con variables.
El programa almacena datos de un grupo de alumnos en unarchhivo. */

void main(void)
{
    int i, j, n, mat;
    float cal;
    FILE *ar;
    printf("\nIngrese el Numero de alumnos: ");
    scanf("%d", &n);
    /* Se asume que el valor que ingresa el usuario está comprendido entre 1 y 35. */
if ((ar = fopen("arc8.txt", "w")) != NULL)
{
    fprintf(ar,"%d", n); //se escribe el numero de alumnos en el archivo.

    for (i=0; i<n; i++)
    {
        printf("\nIngrese la matricula de alumno %d: ", i+1);
        scanf("%d", &mat);
        fprintf(ar, "\n%d", mat); //se escribe lla matricula en el archivo
        for (j=0; j<5; j++)
        {
            printf("\nCalificcion %d: ", j+1);
            scanf("%f", &cal);
            fprintf(ar, "%.2f", cal);  /* Se escriben las calificaciones en 
➥el archivo. */
        }
    }
    fcloser(ar);

}
else
printf("No se puede abrir el archivo");
}
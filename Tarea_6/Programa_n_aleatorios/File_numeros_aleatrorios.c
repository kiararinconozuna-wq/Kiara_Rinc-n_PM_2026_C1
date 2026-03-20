#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    //Declaro las variables
    FILE *Archivo;
    int n= 10;
    int i;

    //crear archivo

    Archivo = fopen("Archivo.txt", "w");   //modo escritura
    if (Archivo == NULL)
    {
        printf("No se puede abrir el archivo");
        return 1;
    } 
    else
    printf("El archivo se abrio correctamente\n");

    srand(time(NULL)); //inicializacion para numeros aleatorios

    for (i = 0; i < n; i++)
    {
        int num = rand() % 200;  // numeros en uun rango de 0 a 199
        fprintf(Archivo, "%d\n", num);
    }
    fclose(Archivo);
    //contar los numeros que hay

    Archivo = fopen("Archivo.txt", "r");
    if (Archivo == NULL)
    {
        printf("Errorr al abrir el archivo\n");
        return (1);
    }

    int count = 0; //contador de numeros

    int temp; //variable temporal

    while (fscanf(Archivo, "%d", &temp) == 1)
    {
        count++;
    }
    fclose(Archivo);
    printf("Cantidad de numeros: %d\n", count);

    //memoria dinamica
    int *arr;
    arr = malloc(count * sizeof(int));

    if (arr == NULL)
    {
      printf("Error al asignar memoria\n");
      return 1;
    }

    // leer y guardar en arreglo
    Archivo = fopen("Archivo.txt", "r");
    i = 0;
    while (fscanf(Archivo, "%d", &arr[i]) == 1)
    {
      i++;
    }
    fclose(Archivo);

    for (i = 0; i < count; i++)
    {
      printf("%d ", arr[i]);
    }

    //Ordenamiento
      int j;
      for (i = 0; i < count - 1; i++)
    {
      for (j = 0; j < count - i - 1; j++)
     {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
     }
    }
     printf("\nNumeros Ordenados:\n");

     for (i = 0; i < count; i++)
    {
     printf("%d ", arr[i]);
    }

    //Guardar en archivo
     Archivo = fopen("Archivo.txt", "w");

     if (Archivo == NULL)
{
    printf("Error al abrir archivo para escribir\n");
    return 1;
}
     for (i = 0; i < count; i++)
    {
    fprintf(Archivo, "%d\n", arr[i]);
    }
     fclose(Archivo);

     //liberar memoria
    free(arr);

    return 0;
}
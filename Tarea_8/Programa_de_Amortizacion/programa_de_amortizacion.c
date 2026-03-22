#include <stdio.h>

int main(void)
{
    //variables
    int mes;
    float valor_inicial;
    float valor_final;

    float depreciacion;
    float valor_actual;
    FILE *archivo;
    
    //pedir los datos

    printf("\nIngrese el valor incial: ");
    scanf("%f", &valor_inicial);

    printf("\nIngrese el valor final: ");
    scanf("%f", &valor_final);

    printf("\nIngrese el mes: ");
    scanf("%d", &mes);

    //validacion.
     if (mes <= 0)
    {
        printf("\nMes invalido");
        return 1;
    }

    //comprobacion 

    printf("Valor inicial: %.2f\n", valor_inicial);
    printf("Valor final: %.2f\n", valor_final);
    printf("Meses: %d\n", mes);

    // formula

    depreciacion = (valor_inicial - valor_final)/mes;

    printf("Depreciacion mensual: %.2f\n", depreciacion);

    

    //************** 
    archivo = fopen("tabla.txt", "w");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    fprintf(archivo, "Mes\tValor\n");
    
    valor_actual = valor_inicial;
    //tabla
    for (int i = 1; i <= mes; i++)
    {
       valor_actual -= depreciacion;
       printf("Mes %d: %.2f\n", i, valor_actual);
       fprintf(archivo, "%d\t%.2f\n", i, valor_actual);
    }
    fclose(archivo);

return 0;

}
#include <stdio.h>

/*Archivos y caracteres.
El programa escribe caracteres en un archivo. */

void main(void){
    char p1;
    FILE *ar;
    ar = fopen("arc.txt", "w"); //se abre el archivo arc.txt para escritura. 
    if (ar !=NULL)
    {
        while ((p1=getchar()) != '\n')
        
            /* se escriben caracteres en el archivo mientras no detecte el caracter que indica el fin de la 
            linea*/
            fputc(p1, ar);
            fcloser(ar);    //se cierra el archivo

        
    }
    elseprintf("No se puede abrir el archivo");
}
#include <stdio.h>

/*Archivos y caracteres.
El programa lee carateres de un archivo*/

void main(void){
    char p1;
    FILE *ar;
    if ((ar = fopen("arc.txt", "r")) != NULL) /*se abre 
    el archivo para lectura. observa que laas dos instrucciones del pograna 9.1 necesarias para abrir el
    archivo y verificar que este en realidad se haya abierto se puede agrupar en una
    solo intruccion
    */
   {
    while (!feof(ar))
    /*se leen caracteres del archivo mientra no se detecte el fin del archivo*/
    {
        p1 = fgetc(ar); //lee el carater del archivo
        putchar(p1);   //despliega el caracter en la pantalla.

    }
    fcloser(ar);
   }
   else  
   printf("no se puede abrir el archivo");
}
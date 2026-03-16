#include <stdio.h>
/* funciones para el manejo de cadenas de caraceres de la biblioteca stdio.h*/

void main(void)
{
    char *cad0 = " Buenos dias"; /* en este caso se asiigna 11 caracteres mas el caracter de terminacion '\0'
    a la posicion de memoria a la que apunta la variable cad0 - apuntador del tipo cadena de caracteres. */

    chart cad1[20] = "Hola"; /* se asignan cuatro carateres mas el caracter de terminacion a la variable tipo char cad. oobserva que cad1 tiene espacio 
    para 200 carateres.  */
    char cad2[] = "Mexico";  /* en este caso se asigna seis caracteres (mas el caracter de terminacion)
    a  la variable cad2. observacion que cad2 no tiiene espacio reservado como cad1; por lo tanto, acepta cuanquier numero de caracteres. */
char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', 's', '\0'};
/*observacion otra forma de asignacion de valores a la variable cad3. */
char cad4[20], cad5[20], cad6[20];
printf("\n L cadena cad0 es: ");
puts(cad0);
/* la funcion puts es la mas apropiada para recibir cadenas de caracteres. 
observa que esta funcion baja automaticamente una linea despues de imprimir la
cadena*/

printf("\nLa cadena cad1 es: ");
printf("%s", cad1);
/* La  función printf, con el formato de variable %s,también se puede utilizar
para escribir cadenas de caracteres. Baja automáticamente una línea después
de escribir la cadena.*/
printf("\nLa cadena cad2 es: ");
puts(cad2);
printf("\nLa cadena cad3 es: ");
puts(cad3);

printf("\n Ingrese una linea de texto -se lee con gets-: \n");
/* La función getses la más apropiada para leer cadenas de caracteres. */
gets(cad4);
printf("\nLa cadena cad 4 es: ");
puts(cad4);
fflush(stdin);

printf("Ingrese una linea de texto -se le con scanf-: \n");
scanf("%s", cad5)
/* La función scanf, con el formato de variable %s, también se puede utilizar
para leer una cadena de caracteres, aunque con algunas restricciones. Si la
cadena está formada por varias palabras sólo lee la primera. Por ejemplo, si
queremos ingresar la cadena “Buenos días”, sólo lee la palabra “Buenos”, por
ello esta función únicamente es útil si conocemos con anticipación que la
cadena que vamos a leer está formada por una sola palabra. */
printf("\nLa cadena cad5 es: ");
fflush(stdin);
char p;
int i = 0;
/* La declaración de variables siempre se debe realizar en la parte inicial del programa. En este caso se colocan en esta sección (char p e inti = 0) para
que puedas observar la relación directa con las líneas de programación que se muestran a continuación. */
printf("\nIngrese una linea de texto -se lee cada caracter con getchar-: \n");
/* Se utiliza la función getcharpara leer caracteres de la línea de texto y
asignarlos a la variable de tipo cadena de caracteres cad6. Observa que se leen
caracteres mientras no se encuentre al caracter que indica fin de línea ‘\n’. */
while ((p = getchar()) != '\n')
cad6[i+++] = p;
cad6[i] = '\0';
/* Al final de la cadena se incorpora el caracter de terminación NULL para indicar el fin de la misma. */
printf("\nLa cadena cad6 es: ");
puts(cad6);
}
/*Ejercicio 3 Escribir un programa que reciba una serie de cadenas de caracteres
como argumentos. El programa deberá concatenarlas y dar la vuelta a la cadena
resultante. La cadena que almacene la concatenación de los argumentos debe
utilizar la memoria justa y necesaria.*/

#include <stdio.h>
#include <string.h>

void concatenar (char textocompleto[],char s1[],char s2[]);

int main(void) //Función principal.
{
	char textfull[100];
	char s1[] = "\n\nJose estudia programacion en la UNEG.",s2[] ="El esta estudiando funciones en lenguaje C.\n\n";
	
		
		strcat(textfull, s1);
		strcat(textfull, " ");
		strcat(textfull, s2);
		
	printf("%s", textfull);
	
	return 0;
}
void concatenar (char textfull[],char s1[], char s2[])
{
		
		strcat(textfull, " ");
		strcat(textfull, s1);
		
}
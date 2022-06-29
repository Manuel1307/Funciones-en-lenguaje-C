/*Ejercicio 2 Escribir un programa que reciba como argumento un conjunto de
números. Calcular la media mediante una función*/

#include <stdio.h>

int main(void)
{
	int n1,n2,n3,n4,n5,suma=0;
	float div=0;
	media(n1,n2,n3,n4,n5,suma,div);
	return 0;
}
void media (int n1,int n2,int n3,int n4,int n5,int suma, float div)
{
	printf ("inserte el primer numero:\n "); scanf("%d",&n1);
	printf ("inserte el segundo numero:\n "); scanf("%d",&n2);
	printf ("inserte el tercer numero:\n "); scanf("%d",&n3);
	printf ("inserte el cuarto numero:\n "); scanf("%d",&n4);
	printf ("inserte el quinto numero:\n "); scanf("%d",&n5);
	{
		suma = n1 + n2 + n3 + n4 + n5; 
		div = suma / 5;
	}
	
printf("la media de los 5 numeros es: %.1f",div);

}
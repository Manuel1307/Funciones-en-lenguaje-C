/*Ejercicio 1: Escribir una función que sume dos números. Implemente un programa
que la utilice.*/

#include<stdio.h>
int main()
{
	
	int n1,n2,suma;
	sumadedosnumeros(n1,n2,suma);
	return 0;
	
}
void sumadedosnumeros (int num1, int num2, int suma)
{
	
		printf("\ninserte el primer numero: "); 
		scanf("%d",&num1);
		
		printf("\ninserte el segundo numero: ");
		scanf("%d",&num2);
		
		suma = num1 + num2;
		
		printf("\nel resultado es:%d",suma);
		
	}

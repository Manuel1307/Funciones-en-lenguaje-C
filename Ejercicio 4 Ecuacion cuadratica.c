/*Ejercicio 4 Escribir una función que calcule y presente las raíces reales de la
ecuación de segundo grado ax2+bx+c=O*/

#include <stdio.h>
#include <math.h>

void ecuaciones (double a, double b, double c, double * x1, double* x2);

int main (void)
{
	printf("\nsolucion de la ecuacion cuadratica: ax2+bx+c=O = 3x2 + 14x + (-2) = 0\n");
	double a = 3, b = 14, c = -2, x1, x2;
	
	ecuaciones(a, b, c, &x1, &x2);
	
	printf("\nEl resultado de x1 es: %.2lf\n",x1);
	printf("El resultado de x2 es: %.2lf\n",x2);
	
	return 0;
}

void ecuaciones (double a, double b, double c, double * x1, double* x2)
{
	*x1 = (-b+(sqrt(b*b-4*a*c)))/2*a;
	*x2 = (-b-(sqrt(b*b-4*a*c)))/2*a;
}
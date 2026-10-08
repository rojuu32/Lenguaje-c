#include <stdio.h>

int main () {
	
	//Realize un programa que permita usar dos numeros
	//Para realizar las 4 operaciones al mismo tiempo
	 
	int numero1;
	int numero2;
	int suma, resta, multiplicar, dividir;
	
	//entrada
	
	printf ("ingrese el primer numero");
	scanf("%d", &numero1 );
	printf ("ingrese el segundo numero");
	scanf("%d", &numero2 );
	//proceso
	
	suma=numero1+numero2;
	resta=numero1-numero2;
	multiplicar=numero1*numero2;
	dividir=numero1/numero2;
	 
	//salida
	printf("la suma de dos numeros es: &d\n", suma);
	printf("la resta de dos numeros es: &d\n", resta);
	printf("la multiplicacion de dos numeros es: &d\n", multiplicar);
	printf("la division de dos numeros es: &d\n", dividir);
	
	return 0;
	
}

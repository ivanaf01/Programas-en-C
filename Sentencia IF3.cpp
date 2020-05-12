 	/*Es una istrucción que usamos para ayudar a nuestro programa a tomar decisiones*/
	
	
	/*Hacer un programa que lea un número entero positivo de cuatro cifras. Ese número significa un año
	Se pide visualizar si dicho año es bisiesto o no.
	
	*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)

{
	setlocale (LC_CTYPE, "Spanish");
	
	int digito;
	int prim;
	int seg;

	printf ("Indique un número entero positivo de 4 dígitos: ");
	scanf ("%d", &digito);
	fflush (stdin);
	printf ("\n\n");
	
	if (digito>999 && digito<=9999){
		prim=(digito / 100);
		seg=(digito % 100);
			if (prim % 4 == 0 && seg == 00)
				printf("El año ingresado es bisiesto secular");
			else if(seg != 00 && seg % 4 == 0)
				printf("El año ingresado es bisiesto no secular");
			else
				printf("El año ingresado no es bisiesto ni secular");
	}
	else
		printf("El número ingresado no es válido");
			
	printf ("\n\n");
	
	system ("pause");
	
	return 0;
}


 	/*Es una istrucci�n que usamos para ayudar a nuestro programa a tomar decisiones*/
	
	
	/*Hacer un programa que lea un n�mero entero positivo de cuatro cifras. Ese n�mero significa un a�o
	Se pide visualizar si dicho a�o es bisiesto o no.
	
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

	printf ("Indique un n�mero entero positivo de 4 d�gitos: ");
	scanf ("%d", &digito);
	fflush (stdin);
	printf ("\n\n");
	
	if (digito>999 && digito<=9999){
		prim=(digito / 100);
		seg=(digito % 100);
			if (prim % 4 == 0 && seg == 00)
				printf("El a�o ingresado es bisiesto secular");
			else if(seg != 00 && seg % 4 == 0)
				printf("El a�o ingresado es bisiesto no secular");
			else
				printf("El a�o ingresado no es bisiesto ni secular");
	}
	else
		printf("El n�mero ingresado no es v�lido");
			
	printf ("\n\n");
	
	system ("pause");
	
	return 0;
}


 	/*Es una istrucci�n que usamos para ayudar a nuestro programa a tomar decisiones*/
	
	
	/*Realizar un programa que lea un n�mero entero y que imprima si termina o no termina en 23*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)

{
	setlocale (LC_CTYPE, "Spanish");
	
	int num;
	int result;

	printf ("Indique un n�mero entero: ");
	scanf ("%d", &num);
	fflush (stdin);
	printf ("\n\n");
	
	result=(num % 100);
	
	if (result == 23 || result == -23)
		printf ("El n�mero ingresado termina en 23");
	else
		printf ("El n�mero ingresado no termina en 23");
			
	printf ("\n\n");
	
	system ("pause");
	
	return 0;
}


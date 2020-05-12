 	/*Es una istrucción que usamos para ayudar a nuestro programa a tomar decisiones*/
	
	
	/*Realizar un programa que lea un número entero y que imprima si termina o no termina en 23*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)

{
	setlocale (LC_CTYPE, "Spanish");
	
	int num;
	int result;

	printf ("Indique un número entero: ");
	scanf ("%d", &num);
	fflush (stdin);
	printf ("\n\n");
	
	result=(num % 100);
	
	if (result == 23 || result == -23)
		printf ("El número ingresado termina en 23");
	else
		printf ("El número ingresado no termina en 23");
			
	printf ("\n\n");
	
	system ("pause");
	
	return 0;
}


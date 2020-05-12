 	/*Es una istrucción que usamos para ayudar a nuestro programa a tomar decisiones*/
	
	
	/*Hacer un programa que lea un número entero positivo de cuatro cifras. 
	Se pide partir ese número en dos y asignar en dos variables con los siguientes nombres: prim y seg.
	
	Se pide visualizar dichas variables con carteles aclaratorios y luego visualizar 
	si la variable prim, se encuentra en  alguno de los siguientes rangos 0..49 , 50...79, o  80...99*/

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
			printf ("Sus dos primeros dígitos son %d", prim);
			printf ("\n\n");
			printf ("Sus dos últimos dígitos son %.2d", seg);
			printf ("\n\n\n\n");
				if (prim<=49)
					printf("Los dos primeros dígitos de su número se encuentran entre el rango 0...49");
				else if(prim <= 50 && prim >= 79)
					printf("Los dos primeros dígitos de su número se encuentran entre el rango 50...79");
				else
					printf("Los dos primeros dígitos de su número se encuentran entre el rango 80...99");
	}
	else
		printf("El número ingresado es inválido");
			
	printf ("\n\n");
	
	system ("pause");
	
	return 0;
}


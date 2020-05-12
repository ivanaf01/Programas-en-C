#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{	
	setlocale (LC_CTYPE, "Spanish");
	
	int n;
	int result;
	int i;
	
	printf("Ingrese un número que representa la cantidad de múltiplos de 10 que desea visualizar en pantalla: ");
	scanf("%d", &n);
	fflush (stdin);
	printf ("\n\n");	
	
	i=1;
	
		do{
			result = 10*i;
			printf("\t10.%d = %d",i, result);
			printf ("\n");
			i++;
		}while(i<=n);
	
	printf ("\n\n");
	system("pause");
	return 0;
}


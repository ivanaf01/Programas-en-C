//Programa que lee una cadena de caracteres y la imprime a la inversa

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>

main()
{ 
	setlocale (LC_CTYPE, "Spanish");
	
	const int LONMAX = 80;
	char frase[LONMAX+1];
	int i, longitud;
	
	printf("Ingrese una frase: ");
	gets(frase);
	printf("\n");
	printf("\tLa frase que introdujo es:\n");
	
	
	i = 0;
	longitud = strlen(frase);
		
	for(i = strlen(frase)-1; i >= 0; i--){
		printf("\n\t%c", frase[i]);
	}
		
	printf("\n\n");
	system("pause");
	return 0;
}

	



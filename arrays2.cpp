//Programa que lee 10 valores enteros (pudiendo repetirse algunos) y cuenta los repetidos
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

main()
{ 
	setlocale (LC_CTYPE, "Spanish");
	
	int arreglo[10], i, valor, contador, k;
	
	printf("Ingrese 10 valores enteros (pueden ser repetidos):\n");
	
	for(i=0; i<10; i++){
		printf("\n\tIngrese valor %d:  ", i+1);
		scanf("%d", &arreglo[i]);		
	}
			
	printf("\n\n\tIngrese un valor que desee buscar: ");
	scanf("%d", &valor);
	
	contador=0;
	for(i=0; i<10; i++){
		if (arreglo[i] == valor)
			contador=contador+1;
	}
		
	if(contador>1)
		printf("\n\n\t\tEl número %d se encuentra en el arreglo y se repite %d veces\n", valor, contador);
	else if(contador==1)
		printf("\n\n\t\tEl número %d se encuentra en el arreglo pero no se repite\n", valor);
	else
		printf("\n\n\t\tEl número %d no se encuentra en el arreglo\n", valor);
		
	printf("\n\n");
	system("pause");
	return 0;
}

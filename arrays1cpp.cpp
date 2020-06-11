#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

main()
{ 
	setlocale (LC_CTYPE, "Spanish");
	
	int arreglo[10], i, valor;

	printf("Ingrese 10 valores enteros no repetidos:\n");
	
	for(i=0; i<10; i++){
		printf("\n\tIngrese valor %d:  ", i+1);
		scanf("%d", &arreglo[i]);
	}
	
	printf("\n\n\tIngrese un valor que desee buscar: ");
	scanf("%d", &valor);
	
	i=0;
	for()
	
	while(arreglo[i]!= valor && i<=9){
		i++;
	}
	if (i<=9)
		printf("\t\tEl valor ingresado se encuentra en el arreglo\n");
	else
		printf("\t\tEl valor ingresado NO se encuentra en el arreglo\n");
	
	printf("\n\n");
	system("pause");
	return 0;
}

	



/*Realizar un programa que lea tres valores enteros que correspondan a una fecha.

Utilizar tres variables con los siguientes nombres

dia
mes
anio

Se pide un algoritmo de VALIDAR FECHA, visualizando si la fecha ingresada es correcta o incorrecta.

Tener en cuenta que para el análisis del mes de febrero tendrán que tener en cuenta si el año es bisiesto o no (realizado en otra entrega)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{	
	setlocale (LC_CTYPE, "Spanish");
	
    int dia, mes, anio;

	printf ("Ingrese tres valores enteros que correspondan a una fecha:\n");	   
   	printf( "\nDÍA: ");
    scanf( "%d", &dia );
    fflush (stdin);
    printf( "\n MES: ");
    scanf( "%d", &mes );
    fflush (stdin);
    printf( "\nAÑO: ");
    scanf( "%d", &anio );
    fflush (stdin);
    
    if (mes>=1 && mes<=12){
		if(anio>999 && anio <=9999){
			switch (mes){
				
				case 2: if(anio%4==0 && anio%100!=0 || anio%400==0){
							if (dia>=1 && dia<=29){
								printf("Fecha Correcta");
							}
							else 
								printf("Fecha Incorrecta");	
						}
						else if(dia>=1 && dia<=28){
							printf("Fecha Correcta");
						}
						else 
							printf("Fecha Incorrecta");
				break;

				case 1 :
				case 3 :
				case 5 :
				case 7 :
				case 8 :
				case 10 :
				case 12 : if (dia>=1 && dia<=31){
							printf ("Fecha Correcta");				
						}
						else 
							printf("Fecha Incorrecta");
						break;
						
				case 4 :
				case 6 :
				case 9 :
				case 11 : if (dia>=1 && dia<=31){
							printf ("Fecha Correcta");				
						}
						else 
							printf("Fecha Incorrecta");
						break;				
			}
		}
		else
			printf("Fecha Incorrecta");
	}
	else
		printf("Fecha Incorrecta");	

	printf ("\n\n");	
	system("pause");
	return 0;
}


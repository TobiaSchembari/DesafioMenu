/*
 * Menu.c
 *
 *  Created on: Sep 8, 2022
 *      Author: topit
 */
#include <stdio.h>
#include <stdlib.h>

char opcionesMenu()
{
	char opcion;

	printf("\nA-Iniciar "
			"\nB-Procesar"
			"\nC-Finalizar"
			"\nD-Salir"
			"\n\n Ingrese una opcion: ");
	fflush(stdin);
	scanf("%c",&opcion);

	while(opcion!='A' && opcion!='B' && opcion!='C' && opcion!='D')
	{
		printf("----ERROR----\n\n"
				"\n a-Iniciar "
				"\nb-Procesar"
				"\nc-Finalizar"
				"nd-Salir"
				"\n Ingrese una opcion: ");
		fflush(stdin);
		scanf("%c",&opcion);
	}


	return opcion;
}


char salirMenu()
{
	char salir;
	printf("\nSeguro que desea salir :(s/n) ");
	fflush(stdin);
	scanf("%c",&salir);
	while(salir!='s' && salir!='n')
	{
		printf("\n----ERROR----"
				"\nSeguro que desea salir :(s/n) ");
		fflush(stdin);
		scanf("%c",&salir);
	}
	return salir;
}

/*
 ============================================================================
 Name        : ClaseJueves.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"

int main(void) {
	setbuf(stdout, NULL);

	char opcionMenu;
	char salir;
	int flagIniciar=0;
	int flagProcesar=0;


	do{
		opcionMenu=opcionesMenu();

		switch(opcionMenu){
		case 'A':
			printf("----Iniciando-----");
			flagIniciar=1;
			break;
		case 'B':
		if(flagIniciar ==0){
			printf("Debe inciar antes de procesar");

		}else{
			printf("----Procesando----");
			flagProcesar = 1;
		}
		break;
		case 'C':
			if(flagIniciar == 0){
				printf("Debe iniciar antes de finalizar");
			}else if(flagProcesar == 0){
				printf("Debe procesar antes de finalizar");

			}else{printf("----Finalizando----");}break;
		default:
			salir=salirMenu();
							printf("----*A salido del menu----\n");
						break;

		}

	}while(opcionMenu !='D');

	return EXIT_SUCCESS;
}


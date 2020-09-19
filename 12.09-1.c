// Bibliotecas
	#include <stdio.h>
	#include <locale.h>
	#include <conio.h>
	#include <stdlib.h>

// Variáveis 

	int cont, resultado;
	




//Corpo do programa

	int main ()
	{
	setlocale (LC_ALL, "portuguese");
	printf ("\nOlá ! Para saber os múltiplos de 3 entre 0 e 100, aperte qualquer tecla.");
	getch ();
	for (cont = 1; resultado<99; cont++)
	{ 
	resultado = cont * 3; 
	printf ("\n\n====%i====\n",resultado);
		
	}
	
	
	
	printf ("\nPressione qualquer tecla para sair.\n\n");
	exit(0);
	return 0;
	}

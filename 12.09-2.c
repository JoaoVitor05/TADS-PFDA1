// Bibliotecas 
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <conio.h>
	
// Variáveis 

	int cont, resultado;
	
// Corpo do programa

	int main()
	{
	
	setlocale (LC_ALL,"portuguese");
	printf ("\nOlá ! Para saber o quadrado de todos os números inteiros entre 15 e 200, aperte qualquer tecla.\n\n");
	getch();
	
	for (cont=16 ;cont<=199 ;cont++ )
	{
	resultado= cont*cont;
	printf ("\n\n====%i====\n",resultado); 		
	}
	
	
	printf ("\nPressione qualquer tecla para sair.");
	exit(0);
	return 0;
	}

// Bibliotecas
	
	#include <stdio.h>
	#include <conio.h>
	#include <locale.h>
	#include <stdlib.h>
	
// vari�veis	
	int pgmt;
	int tab = 0;   
	
// Corpo do programa

	int main ()
	{
	setlocale (LC_ALL,"portuguese");	
	printf ("Ol� ! Pressione qualquer tecla para saber o pagamento do monge.");	
	getch ();
	for (pgmt=1;tab<=14;pgmt= 2 * pgmt)	
	{	
	tab++;	

	}
	printf ("O pagamento do monge � : %i\n",pgmt);
		
	exit(0);	
	return 0;	
	}

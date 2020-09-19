// Bibliotecas

	#include <stdio.h>
	#include <conio.h>
	#include <locale.h>
	#include <stdlib.h>
	
// Variáveis

	int cont = 0;
	char sono;
// Corpo do programa

	int main ()	
	{
	setlocale (LC_ALL,"portuguese");
	inicio:
	printf ("\n\nVocê já dormiu ? [s/n]");
	sono = getche ();
	
	switch (sono) {
	case 's':
	printf("\n\nContou %i carneiro(s)",cont);
	break;
	case 'n':
	cont++;
	printf("\n\nContando carneirinhos...");	
	getch();
	goto inicio;	
	break;
	default:
	printf ("\n\nOpção inválida!");	
	getch();
	goto inicio;	
	break;	
	}
	
	getch ();
	return 0;
	}

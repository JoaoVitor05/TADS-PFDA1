// Bibliotecas

	#include <stdio.h>
	#include <locale.h>
	#include <conio.h>
	#include <stdlib.h>

// Vari�veis

	int num;
	int cont;
	int soma;

// Corpo do programa

	int main ()
	{
	setlocale (LC_ALL,"portuguese");
	printf ("Ol� ! Digite um n�mero inteiro para saber a soma dos n�meros anteriores(incluindo ele) e aperte Enter.\n");
	scanf ("%i", &num);
	cont=1;
	soma=0;
	
	while (cont<=num){
	soma= soma + cont;
	cont=cont+1;
	
	
	}
	
	printf ("Resultado: %i", soma);
	getch();
	exit(0);
	return 0;
	}

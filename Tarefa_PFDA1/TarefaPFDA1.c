/*
# Objetivo: Calcular área de um retângulo
# Autor: João Maciel
# Descrição: Este programa calcula a aéra de qualquer retângulo
através das informações fornecidas pelo usuário.
# Última atualização: 23/10/2020 às hh:mm
*/

// Biblioteas

#include <stdio.h>
#include <locale.h>

// Variáveis

float altura_retangulo;
float largura_retangulo;
float area_retangulo;

//Corpo do programa

int calcula_area_retangulo ()
//Essa função calcula a área do retângulo
{

setlocale (LC_ALL,"portuguese");

printf("\nOlá ! Digite os valores solicitados para descobrir a área do retângulo");

printf("\n\nDigite a largura: ");
scanf("%f",&largura_retangulo);

printf("\nDigite a altura: ");
scanf("%f",&altura_retangulo);

area_retangulo = largura_retangulo * altura_retangulo;
printf("\n\nÁrea do retãngulo = %0.2f\n\n", area_retangulo);

return 0;
}

int main()
{
calcula_area_retangulo();
return 0;
}

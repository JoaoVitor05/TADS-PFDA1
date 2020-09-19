    // Bibliotecas

   #include <stdio.h>
   #include <stdlib.h>
   #include <locale.h>
   #include <math.h>
   
   // Corpo do programa
   
   int main ()
   {
    setlocale (LC_ALL, "Portuguese");  
    
    int Base;   
    int Expoente;
    int Resultado;
    
    printf ("\n**** Olá ! Digite a base e expoente de um número para saber o resultado. ****");
    printf ("\n\nDigite a base: ");
    scanf  ("%i", &Base);
    
    printf ("\n\nDigite o expoente: ");
    scanf  ("%i", &Expoente);
    
    Resultado = pow( Base, Expoente);
    
    printf ("\n\nO Resultado é: %i \n\n", Resultado);   
       
    system ("pause");
    return 0;
   }

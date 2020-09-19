// Bibliotecas

   #include <stdio.h>
   #include <stdlib.h>
   #include <locale.h>
   
// Corpo do programa

   int main ()
   {
       setlocale (LC_ALL, "Portuguese");
       
       float Numero;
       float Dobro;
       float Quadrado;
       
       printf ("\nOlá ! Digite um número para saber seu dobro e seu quadrado: ");
       fflush (stdin);
       scanf ("%f.", &Numero);
       
       Dobro = Numero + Numero;
       Quadrado = Numero * Numero;
       
       printf ("\n\n\nDobro do número informado = %0.2f.\n\n\n""Quadrado do número informado = %0.2f.\n\n\n", Dobro, Quadrado );
       
       
       system ("pause");
       return 0;
       
   }
   
       
   
   

// Bibliotecas
   #include <stdio.h>
   #include <stdlib.h>
   #include <locale.h>
   
// Corpo do Programa

   int main (void)
   {
       
       int Altura;
       int Raio;
       float Pi = 3.14159;
       float Volume;
       
       setlocale (LC_ALL, "Portuguese");
       
       printf ("\n\nOl� ! Informe os dados solicitados para saber o volume de sua lata de �leo.\n\n\nQual a altura da lata, em cent�metros ? ");
       scanf  ("%i", &Altura);  
       
       
       printf ("\n\nOk. Qual o raio da lata , em cent�metros ? ");
       fflush (stdin);
       scanf  ("%i", &Raio);
       
       Volume = (Raio * Raio) * Altura * Pi;
        
       printf ("\n\nCerto ! O volume de sua lata de �leo, em ml, � = %0.2f.\n", Volume );
        
       getch ();
       exit; 0;
       return 0;
   }

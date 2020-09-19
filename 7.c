    // Bibliotecas
    
    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    
    
    // Corpo do programa
    
    int main ()
    {
     setlocale (LC_ALL, "Portuguese");   
     
     int AnoH;
     int MesH;
     int DiaH;
     int AnoI;
     int MesI;
     int DiaI;
     int AnoR;
     int MesR;
     int DiaR;  
     int Semanas;
        
     printf (" \nOlá ! Para saber sua idade, siga as instruções.");
     printf ("\n\nAno em que estamos: ");
     scanf  ("%i", &AnoH);
     printf ("\n\nMês em que estamos: ");
     fflush (stdin);
     scanf  ("%i", &MesH);
     printf ("\n\nDia em que estamos: ");
     fflush (stdin);
     scanf  ("%i", &DiaH);

     printf ("\n\nAno do seu aniversário: ");     
     fflush (stdin);
     scanf  ("%i", &AnoI);
     printf ("\n\nMês do seu aniversário: ");
     fflush (stdin);
     scanf  ("%i", &MesI);
     printf ("\n\nDia do seu aniversário: ");
     fflush (stdin);
     scanf  ("%i", &DiaI);
     
     AnoR = AnoH - AnoI;
     MesR = AnoR * 12;
     DiaR = AnoR * 365;
     Semanas = DiaR / 7;
     
     printf ("\n\nSua idade em anos: %i.",AnoR);
     printf ("\n\nSua idade em meses: %i.", MesR);
     printf ("\n\nSua idade em dias: %i.", DiaR);
     printf ("\n\nSua idade em semanas: %i.\n\n", Semanas); 
        
    system ("pause");
    return 0;
        } 

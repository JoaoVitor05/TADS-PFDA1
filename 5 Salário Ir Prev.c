    // Bibliotecas 
    
    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    
    // Corpo do programa
    
    int main ()
    {
    setlocale (LC_ALL, "Portuguese");
    
    float SBruto;
    float SPrev;
    float SPrevIr;
    float Prev;
    float Ir;  
   
    printf ("*** Ol� ! Para saber seu sal�rio l�quido e os descontos, siga as instru��es. ***"); 
    printf ("\n\nDigite o valor de seu sal�rio bruto: ");
    scanf  ("%f", &SBruto);
    
    SPrev = SBruto - (SBruto * 0.085);
    Prev = SBruto - SPrev;
    SPrevIr = SPrev - (SPrev * 0.275);
    Ir = SPrev - SPrevIr;
    
    
    printf ("\n\nDesconto para Imposto de Renda: %0.2f R$\n\nDesconto para Previd�ncia/: %0.2f R$\n\nSeu sal�rio l�quido: %0.2f R$\n\n", Ir, Prev, SPrevIr);
    
    system ("pause");    
    return 0;    
    }

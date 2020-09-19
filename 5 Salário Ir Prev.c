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
   
    printf ("*** Olá ! Para saber seu salário líquido e os descontos, siga as instruções. ***"); 
    printf ("\n\nDigite o valor de seu salário bruto: ");
    scanf  ("%f", &SBruto);
    
    SPrev = SBruto - (SBruto * 0.085);
    Prev = SBruto - SPrev;
    SPrevIr = SPrev - (SPrev * 0.275);
    Ir = SPrev - SPrevIr;
    
    
    printf ("\n\nDesconto para Imposto de Renda: %0.2f R$\n\nDesconto para Previdência/: %0.2f R$\n\nSeu salário líquido: %0.2f R$\n\n", Ir, Prev, SPrevIr);
    
    system ("pause");    
    return 0;    
    }

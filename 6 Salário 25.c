    // Bibliotecas
    
    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    
    // Corpo do programa
    
    int main ()
    {
    setlocale (LC_ALL, "Portuguese");   
        
    float SalarioB;    
    float Salario25;
    
    printf ("\nOl� ! Informe seu sal�rio para saber como ele ficar� com um reajuste de 25 por cento.\n\nSeu sal�rio atual: R$"); 
    scanf  ("%f", &SalarioB);  
    
    Salario25 = SalarioB + (SalarioB * 0.25);
    
    printf ("\nSeu sal�rio ap�s o ajuste: %0.2f R$\n\n", Salario25); 
        
    system ("pause");    
    return 0;    
    }

    // Bibliotecas
    
    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    
    // Corpo do programa
    
    int main ()
    {
    setlocale (LC_ALL, "Portuguese");    
    
    float TempC;
    float Resultado;
    
    printf ("\n***** Olá ! Bem-vindo ao conversor de °C para °Fahrenheit. *****");
    printf ("\n\n Digite a temperarura, em °C: ");
    scanf  ("%f", &TempC);
    
    Resultado = (TempC * 1.8) + 32;
    
    printf ("\n\n A temperatura informada corresponde a: %0.2f °F\n\n ", Resultado);
        
    system ("pause");  
    return 0;
    }

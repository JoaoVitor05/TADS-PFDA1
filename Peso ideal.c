    // Bibliotecas

  # include <stdio.h>
  # include <locale.h>
  # include <stdlib.h>

  // Corpo do programa

   int main ()
    {
    setlocale (LC_ALL, "portuguese");
    
    float altura;
    float peso;
    char sexo;

    
    printf ("\nOlá, para saber seu peso ideal siga as instruções.\nQual sua altura, em cm ? ");
    fflush(stdin);
    scanf ("%f", &altura);
    printf ("Qual seu sexo ? [m/f]");
    fflush(stdin);
    scanf ("%c", &sexo);
    
    if (sexo == 'm'){
    peso= 72.7 * (altura/100) - 58;
    printf ("Seu peso ideal é: %0.2f Kg\n\n", peso);
    system ("pause");          
    } else {
     
    if (sexo == 'f') {
    peso= 62.1 * (altura/100) - 44.7;
    printf ("Seu peso ideal é: %0.2f Kg", peso);
    system ("pause"); 
    } else {
    printf ("Opção inválida, tecle para sair.\n\n");
    system ("pause");
    return 0;
    }
    
    }
    }


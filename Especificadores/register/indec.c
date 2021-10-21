#include <stdio.h>

int main(int argc, char const *argv[])
{
    register int contador;

    contador = 0;
    for (size_t i = 0; i <= 60; i++)
    {
        if (contador % 2 != 0)
        {
            printf("\n%d",contador);
        }
        contador++;
        
    }
    
    // Atribuir o elemento register a uma variavel é estar dizendo ao compilador a executar ela o mais rapido possivel com prioridade.

    // Pode atribuir a CHAR e INT.
    return 0;
}

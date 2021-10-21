# include <stdio.h>

int contador;

int main(int argc, char const *argv[])
{
    for (size_t i = 0; contador <= 30; i++)
    {
        printf("Contador: %d\n",contador);
        contador++;
    }

    teste();
    return 0;
}

void teste () {
    int contador;

    contador = 200;
    printf("Contador local: %d\n",contador);
    // Quando há a existencia de uma variavel local com o mesmo nome de uma global, as referencias dentro do codigo apenas farao a variavel local.
}

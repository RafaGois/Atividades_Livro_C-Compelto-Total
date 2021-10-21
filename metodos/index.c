#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Informe um limite: ");
    scanf("%d",&n);

    limite(n);
    return 0;

}

void valida (int n) 
{
    if (n % 2 == 0)
    {
        printf("%d é par.\n",n);
    } else {
        printf("%d é impar.\n",n);
    }
}

void limite (int limite) 
{

    int n;
    n = 0;

    while (n <= limite)
    {
        valida(n);
        n++;
    }
}

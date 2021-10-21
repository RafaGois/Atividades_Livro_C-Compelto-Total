# include <stdio.h>

const int constante = 10;

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i <= 10 ; i++)
    {
        printf("%d X %d =%d\n",i, constante,i * constante);
    }
    
    
    return 0;
}

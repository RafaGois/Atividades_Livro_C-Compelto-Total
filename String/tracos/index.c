# include <stdio.h>

void sp_to_dash(const char *str);


int main(int argc, char const *argv[])
{
    sp_to_dash("Ola Rafael");
    return 0;
}



void sp_to_dash(const char *str)
{
    while (*str)
    {
        if (*str == 'a')
        {
            printf("%c",'@');
        } else {
            printf("%c",*str);
        }
        str++;
    }
}
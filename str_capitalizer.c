#include <unistd.h>

void    str_capitalize(char *s)
{
    int i;
    
    i = 0;
    while (s[i])
    {
    if (i == 0)
    {
           if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
           if (s[i] >= 'A' && s[i] <= 'Z')
                i++;
    }
    if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] += 32;
    if (s[i - 1] == '\t' || s[i - 1] == ' ')
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    i++;
    }
    write(1, s, i);
    write(1, "\n", 1);
}

int main(int ac, char *av[])
{
    int i;
    
    i = 0;
    if (ac > 1) // if there's input
    {
        while (ac > i)
        {
            str_capitalize(av[i]);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}

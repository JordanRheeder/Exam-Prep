#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    char letter;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                letter = 'm' - (av[1][i] - 'n');
                i++;
                ft_putchar(letter);
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                letter = 'M' - (av[1][i] - 'N');
                i++;
                ft_putchar(letter);
            }
            else
            {
                i++;
                ft_putchar(av[1][i]);
            }
                
        }
    }
    ft_putchar('\n');
    return (0);
}
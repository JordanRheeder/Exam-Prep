#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int a;
    int b;
    int result;

    if (ac == 4)
    {
        // atoi for a & b values. then apply those to a result. - + / % *
        a = atoi(av[1]); // could apply these inside of the result equation...
        b = atoi(av[3]); // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
        if ((av[2][0]) == '-')
        {
            result = (atoi(av[1]) - atoi(av[3]));
            printf("%d", result);
        }
        else if ((av[2][0]) == '+')
        {
            result = (atoi(av[1]) + atoi(av[3]));
            printf("%d", result);
        }
        else if ((av[2][0]) == '/')
        {
            result = (atoi(av[1]) / atoi(av[3]));
            printf("%d", result);
        }
        else if ((av[2][0]) == '%')
        {
            result = (atoi(av[1]) % atoi(av[3]));
            printf("%d", result);
        }
        else if ((av[2][0]) == '*')
        {
            result = (atoi(av[1]) * atoi(av[3]));
            printf("%d", result);
        }
    }
    printf("\n");
    return (0);
}
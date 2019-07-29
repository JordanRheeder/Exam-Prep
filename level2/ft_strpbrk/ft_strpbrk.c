#include <stdio.h>
#include <string.h>


char    *ft_strchr(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
        {
            return (str);
        }
        str++;
    }    
    return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
    char *str1;
    char *str2;

    str1 = (char *)s1;
    str2 = (char *)s2;
    while (*str1)
    {
        if (ft_strchr(str2, *str1) != 0)
        {
            return (str1);
        }
        str1++;
    }
    return (NULL);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *pch;

		pch = ft_strpbrk(argv[1], argv[2]);
		printf("Characters in |%s|: ", argv[1]);
		while (pch != NULL)
		{
			printf("%c ", *pch);
			pch = ft_strpbrk(pch + 1, argv[2]);
		}
		printf("\n");
	}
	return (0);
}
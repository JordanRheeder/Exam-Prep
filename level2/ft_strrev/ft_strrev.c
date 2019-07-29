#include <stdio.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


char *ft_strrev(char *str)
{
    char tmp;
    int i;
    int j;

    i = 0;
    j = ft_strlen(str) - 1;
    while (i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        j--;
        i++;
    }
    return (str);
}


int main(void)
{
    printf("%s", ft_strrev("abcd"));
    return (0);
}

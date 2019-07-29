#include <stdio.h>
#include <string.h> // for strdup.

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j]) // we found accept inside of s.
				break;
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (i);
}

int	main(void)
{
	char *str = strdup("test");
	char *acp = strdup("s"); //should ret 2
	printf("%zu\n", ft_strspn(str, acp));
	return (0);
}

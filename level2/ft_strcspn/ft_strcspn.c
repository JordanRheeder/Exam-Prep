#include <stdlib.h>

char			*ft_strchr(const char *str, int firstc)
{
	char	*ret;
	ret = (char*)str;
	while(*ret != firstc)
	{
		if (!*ret)
			return (NULL);
		ret++;
	}
	return (ret);
}
size_t			ft_strcspn(const char *s, const char *reject)
{
    size_t ret;

    ret = 0;
    while (*s)
    {
        if (ft_strchr(reject, *s))
            return (ret);
        else
        {
            s++;
            ret++;
        }
    }
    return (ret);
}
#include <stdio.h>
int	main(void)
{
	printf("%zu\n", ft_strcspn("Test", "t"));
	return (0);
}

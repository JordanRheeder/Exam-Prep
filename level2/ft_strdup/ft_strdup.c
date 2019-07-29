#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *str;
    int i;
    int k;

    i = 0;
    k = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    str = (char*)malloc((i + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (str[k])
    {
        str[k] = src[k];
        k++;
    }
    str[k] = '\0';
    return ((char *)str);
}

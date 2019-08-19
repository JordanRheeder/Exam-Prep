/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:55:06 by jrheeder          #+#    #+#             */
/*   Updated: 2019/07/29 14:30:54 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str)
{
	int i;
	while (*str)
	{
		i++;
		str++;
	}
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

int	main(void)
{
	char *str;
	str = strdup("Testing123Testing...");
	printf("%s\n", ft_strrev(str));
	return (0);
}

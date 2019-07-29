/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 12:37:45 by jrheeder          #+#    #+#             */
/*   Updated: 2019/07/29 12:43:21 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> // rem
char	*ft_strdup(char *src)
{
	char	*ret;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	ret = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

int	main(void)
{
	printf("%s\n", ft_strdup("Plswrk:)"));
	return (0);
}

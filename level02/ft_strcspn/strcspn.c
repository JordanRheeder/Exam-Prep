/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 10:30:21 by jrheeder          #+#    #+#             */
/*   Updated: 2019/07/29 11:10:52 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*chr;

	chr = (char *)s;
	while (*chr != c)
	{
		if (!*chr)
			return (NULL);
		chr++;
	}
	return (chr);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (ft_strchr(reject, *s))
		{
			return (ret);
		}
		else
		{
			s++;
			ret++;
		}
	}
	return (ret);
}

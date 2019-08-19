/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:41:03 by jrheeder          #+#    #+#             */
/*   Updated: 2019/07/29 11:58:42 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
char	*ft_strchr(const char *s, int c)
{
	char	*ret;

	ret = (char *)s;
	while (*ret)
	{
		if (!*ret)
			return (NULL);
		ret++;
	}
	return (ret);
}

size_t	ft_strcspn(const char *s, const char *r)
{
	size_t	ret;
	char	*work;
	ret = 0;
	work = (char *)s;
	while (*work)
	{
		if (ft_strchr(r, *work))
			return (ret);
		else
		{
			ret++;
			work++;
		}
	}
	return (ret);
}

#include <stdio.h>

int	main(void)
{
	printf("%zu\n", ft_strcspn("Strings", "t"));
	return (0);
}

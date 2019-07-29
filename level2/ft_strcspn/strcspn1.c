/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:11:01 by jrheeder          #+#    #+#             */
/*   Updated: 2019/07/29 11:40:50 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ret;

	ret = (char *)s;
	while (*ret != c)
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
	
	ret = 0;
	while (*s)
	{
		if (ft_strchr(r, *s))
			return (ret);
		else
		{
			s++;
			ret++;
		}
	}
	return (ret);
}

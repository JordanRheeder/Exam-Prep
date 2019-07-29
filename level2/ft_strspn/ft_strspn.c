/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 14:57:11 by jrheeder          #+#    #+#             */
/*   Updated: 2019/07/29 15:08:33 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0; //reset it for every loop.
		while (accept[j])
		{
			// should count for only things that are in accept?
			if (s[i] == accept[j]) // if not true, increment.
				break ;				// if true, break out and increment i.
			j++;
		}
		if (!accept[j]) // if NP break and not found s = accept at some point.
			break ;
		i++;
	}
	return (i);
}
#include <string.h>
int	main(void)
{
	char *str1 = strdup("testmain");
	char *str2 = strdup("naimset");
	printf("%zu\n", ft_strspn(str1, str2));
	return (0);
}

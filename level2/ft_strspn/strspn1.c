/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strspn1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:23:01 by jrheeder          #+#    #+#             */
/*   Updated: 2019/07/29 16:06:32 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


size_t	ft_strspn(const char *str, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (str[i] == accept[j])
				break;
			j++;
		}
		if (!accept[j])
			break ;
		i++;
	}
	return (i);
}


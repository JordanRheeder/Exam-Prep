/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:45:32 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/13 12:50:58 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] <= 47))
			str[i] -= 32;
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			rstr_capitalizer(av[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

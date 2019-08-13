/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:29:17 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/13 13:43:09 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z') // convert everything to lowers.
			str[i] += 32;
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z') // at first alphabet char change to upper.
				str[i] -= 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t')) // at lower case we upper case if prev was w/s
			str[i] -= 32;
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1); // dont forget new line for each arg
}

int	main(int ac, char *av[])
{
	int i;
	
	i = 1;
	if (ac > 1) // if ac greater than a.out do stuff
	{
		while (ac > i) // while ac > 1 
		{
			str_capitalize(av[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

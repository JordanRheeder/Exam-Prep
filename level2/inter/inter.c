/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:43:55 by jrheeder          #+#    #+#             */
/*   Updated: 2019/07/29 17:19:10 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_has_char(char *str, char c, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (0); // 1 if we want to see if it doesn't have that char.
		j++;
	}
	return (1); // change to 1 if we want to see what it only contains.
}


void	ft_iter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		if (ft_has_char(s1, s1[i], i) == 1) // fix maybe?
		{
			j = 0;
			while (s2[j])
			{
				if (s2[j] == s1[i])
				{
					ft_putchar(s1[i]);
					break ;
				}
				j++;
			}
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_iter(av[1], av[2]);	
	}
	ft_putchar('\n');
	return (0);
}

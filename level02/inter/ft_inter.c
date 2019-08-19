/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 18:51:55 by jrheeder          #+#    #+#             */
/*   Updated: 2019/07/29 19:04:46 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_has_char(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		if (ft_has_char(s2, s1[i], i) == 1) // if it absolutely contains that character.
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

int main(int ac, char *av[])
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	return (0);
}

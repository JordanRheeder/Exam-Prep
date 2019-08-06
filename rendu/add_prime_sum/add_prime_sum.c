/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:38:19 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/06 12:47:27 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putposnbr(int n)
{
	if (n > 9)
		ft_putposnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		atoi_pos(char *s)
{
	int i;

	i = 0;
	while (*s >= '0' && *s <= '9')
	{
		i = (i * 10 + *s++ - '0')
	}
	return (i);
}

int is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
		if (!(n % i++))
			return (0);
	return (1);
}


int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		if (av[1][0] == '-')
		{
			write(1 , "0\n", 2);
			return (0);
		}
		
	}
	else
		write(1, "\n", 1);
	return (0);
}

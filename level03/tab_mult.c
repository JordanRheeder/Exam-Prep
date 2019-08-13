/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:45:18 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/13 13:52:07 by jrheeder         ###   ########.fr       */
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
		i = i * 10 + *s++ - '0';
	return (i);
}

void	tab_mult(int n) // 1 -> 9 * n
{
	int i;

	i = 1;
	while (i < 10)
	{
		ft_putposnbr(i);
		write(1, " x ", 3);
		ft_putposnbr(n);
		write(1, " = ", 3);
		ft_putposnbr(n * i);
		write(1, "\n", 1);
		i++;
	}
}

int main(int ac, char *av[])
{
	if (ac > 1)
	{
		tab_mult(atoi_pos(av[1]));
	}
	else
		ft_putchar('\n');
	return (0);
}


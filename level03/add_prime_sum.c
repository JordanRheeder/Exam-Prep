/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:08:32 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/13 13:27:14 by jrheeder         ###   ########.fr       */
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

int		atoi_pos(char *str)
{
	int i = 0;
	while (*str >= '0' && *str <= '9')
		i = i * 10 + *str++ - '0';
	return (i);
}

int		is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
		if (!(n % i++))
			return (0);
	return (1);
}

void	add_prime_sum(int n)
{
	int i;
	int sum;

	i = 1;
	sum = 0;
	if (n == 1)
		sum = 1;
	while (i++ < n)
	{
		if (is_prime(i))
			sum += i;
	}
	ft_putposnbr(sum);
}

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		add_prime_sum(atoi_pos(av[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}

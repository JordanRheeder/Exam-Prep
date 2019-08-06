/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:09:18 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/06 14:46:38 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *s)
{
	int flag;
	int i;

	i = 0;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	flag = (*s == '-') ? -1 : 0;
	(*s == '-' || *s == '+') ? s++ : 0;
	while (*s >= '0' && *s <= '9')
		i = i * 10 + *s++ - '0';
	return (i);
}

void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;
	n += (n < 10) ? '0' : 'a' - 10;
	write(1, &n, 1);
}

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		print_hex(ft_atoi(av[1]));
	}
	else
		write(1, "\n", 1);
	return (0);
}

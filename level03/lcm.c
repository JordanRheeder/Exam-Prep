/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:34:51 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/13 15:57:46 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	l_c_m;

	l_c_m = 0;
	if (a == 0 || b == 0)
		return (0);
	l_c_m = (a > b) ? a : b;
	while (1)
	{
		if (l_c_m % a == 0 && l_c_m % b == 0)
			break ;
		l_c_m++;
	}
	return (l_c_m);
}

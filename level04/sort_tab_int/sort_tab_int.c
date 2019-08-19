/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:54:40 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/19 11:54:52 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int min;
	int temp;
	
	i = 0;
	if (size == 0)
		return;
	while (i < size - 1)
	{
		j = i;
		min = tab[i];
		while (j < size)
		{
			if (min > tab[j])
			{
				temp = tab[j];
				tab[j] = min;
				min = temp;
			}
			j++;
		}
		tab[i] = min;
		i++;
	}
}

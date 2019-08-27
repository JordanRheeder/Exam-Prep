/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:21:01 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/27 12:07:46 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int temp;
	int comp;

	i = 0;
	temp = 0;
	comp = 0;
	if (size == 0)
		return ;
	while (i < size - 1)
	{
		comp = tab[i];
		j = i;
		while (j < size)
		{
			if (comp > tab[j])
			{
				temp = tab[j];
				tab[j] = comp;
				tab[i] = temp;
				comp = temp;
			}
			j++;
		}
		i++;
	}
}

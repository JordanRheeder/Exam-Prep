/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:54:09 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/13 14:13:44 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int *store;
	int len;
	int i;
	
	len = 0;
	i = 0;
	if (start > end)
		len = start - end + 1;
	else if (start < end)
		len = end - start + 1;
	store = (int *)malloc(sizeof(int) * len);
	//if (start == end)
	//	store[i] = 1;
	if (start > end)
	{
		while (len)
		{
			store[i++] = end++;
			len--;
		}
	}
	else if (start < end)
	{
		while (len)
		{
			store[i++] = end--;
			len--;
		}
	}
	return (store);
}

#include <stdio.h>
int	main(void)
{
	int i;
	int *sto;

	sto = (int *)malloc(sizeof(int) * 4);
	i = 0;
	sto = ft_rrange(0, 0);
	while(i < 1)
	{
		printf("%d\n", sto[i++]);
	}
	return (0);
}

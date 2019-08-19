/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrheeder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:46:07 by jrheeder          #+#    #+#             */
/*   Updated: 2019/08/19 11:46:10 by jrheeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void fprime(int n)
{
	int index = 2;
	if (n == 1)
	{
		printf("1");
		return ;
	}
	else if (n < 1)
		return ;
	while (index <= n)
	{
		if (n % index == 0)
		{
			printf("%i", index);
			n /= index;
			index = 1;
			if (n == 1)
				return ;
			else 
				printf("*");
		}
		index++;
	}
	return ;
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		fprime(atoi(argv[1]));
	}
	printf("\n");
	return (0);
}

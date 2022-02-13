/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduque-v <mduque-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:01:46 by mduque-v          #+#    #+#             */
/*   Updated: 2022/02/12 18:25:56 by mduque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putchar(char c);

void	rush(int y, int x)
{
	int	i;
	int	j;

	while (i <= x - 1)
	{
		while (j <= y - 1)
		{
			if ((j == 0 && i == 0) || (j == 0 && i == x - 1))
				ft_putchar('A');
			else if ((j == y - 1 && i == 0) || (j == y - 1 && i == x - 1))
				ft_putchar('C');
			else if (i == 0 || j == 0 || i == x - 1 || j == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}

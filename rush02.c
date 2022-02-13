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

void	rush(int x, int y)
{
	int	i;
	int	j;

	while (i <= y - 1)
	{
		while (j <= x - 1)
		{
			if (i == 0 && (j == 0 || j == x - 1))
				ft_putchar('A');
			else if (i == y - 1 && (j == 0 || j == x - 1))
				ft_putchar('C');
			else if (i == 0 || j == 0 || i == y - 1 || j == x - 1)
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

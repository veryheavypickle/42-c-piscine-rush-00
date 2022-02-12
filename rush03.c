/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduque-v <mduque-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:01:46 by mduque-v          #+#    #+#             */
/*   Updated: 2022/02/12 18:23:50 by mduque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void    rush (int y, int x)
{   
    int i = 0; int j = 0; int rows = y - 1; int colummns = x - 1;
    while (i <= colummns){
        while (j <= rows) {
            if ((j == 0  && i == 0) || (j == 0 && i == colummns)) {
                ft_putchar('A');
            } else if ((j == rows && i == 0) || (j == rows && i == colummns)) {
                ft_putchar('C');
            } else if (i == 0 || j == 0|| i == colummns || j == rows) {
                ft_putchar('B');
            } else {
                ft_putchar(' ');
            }
            j++;
        }
        j = 0; i++; ft_putchar('\n');
    }
}

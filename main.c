/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduque-v <mduque-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:32:38 by mduque-v          #+#    #+#             */
/*   Updated: 2022/02/12 15:18:21 by mduque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int rush (int x, int y);

int main (void) {

    rush(5,5); 

    return (0); 
}

int rush (int x, int y){

    int i = 1; 
    int j = 1; 
    int rows = x; 
    int colummns = y; 

    char a;
    a = 'A';

    while (i < rows){
        while (j < colummns) {
            /*
            if (j == 1  && i == 1) {
                printf("A");
                write(0, &a, 1);
            } else if (j == 1 && i == y) {
                printf("B");
                write(0, &a, 1);
            } else if (j == x && i == 1) {
                printf("C");
                write(0, &a, 1);
            } else if (j == x && i == y) {
                printf("D");
                write(0, &a, 1);
            }
            */
            j++;
        }
        printf("j: %d\ni: %d\n", j, i);
        printf("x: %d\ny: %d\n\n", x, y);
        i++;
    }


    return (0); 
}

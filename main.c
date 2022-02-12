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

    
    /*
    write(0, "H", 1);
    write(0, "O", 1);
    write(1, "This will be output to standard out\n", 36);
    */
    rush(5,5);
    
    return (0); 
}

int rush (int x, int y){

    int i = 0; 
    int j = 0; 
    int rows = x; 
    int colummns = y; 

    char a;
    char empty;
    a = 'A';
    empty = ' ';

    while (i < colummns){
        i++;
        j = 0;
        while (j < rows) {
            j++;
            if (j == 1  && i == 1) {
                write(0, &a, 1);
            }

            else if (j == 1 && i == y) {
                write(0, &a, 1);
            }

            else if (j == x && i == 1) {
                write(0, &a, 1);
            }
            else if (j == x && i == y) {
                write(0, &a, 1);
            } else {
                write(0, &empty, 1);
            }
            /*
            printf("j: %d\ni: %d\n", j, i);
            printf("x: %d\ny: %d\n\n", x, y);
            */
        }
        /* Write new line */
        write(0, "\n", 1);
        
    }


    return (0); 
}

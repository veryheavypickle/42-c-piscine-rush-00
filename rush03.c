#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void rush(int x, int y){

    int i = 0; 
    int j = 0; 
    int rows = x - 1; 
    int colummns = y - 1; 

    char a;
    char b;
    char c;
    char empty;
    a = 'A';
    b = 'B';
    c = 'C';
    empty = ' ';
    

    while (i < colummns){
        while (j < rows) {
            /* Esquinas */
            /* Fila 1, Columno 1 */
            if (j == 0  && i == 0) {
                ft_putchar(a);
            }
            /* Fila 1, Columno y */
            else if (i == 0 && j == rows){
                ft_putchar(a);
            }
            /*

            Fila x, Columno 1
            else if (j == rows && i == 0) {
                ft_putchar(c);
            }

            Fila x, Columno y
            else if (j == rows && i == colummns) {
                ft_putchar(c);
            }

            Fila 1
            else if (i == 0) {
                ft_putchar(b);
            }

            Fila x
            else if (i == rows) {
                ft_putchar(b);
            }
            
            Write sides
            } else if (i == 1) {
                write(0, &b, 1);
                ft_putchar(&a);
            } else if (i == x) {
                write(0, &b, 1);
                ft_putchar(&a);
            } else if (j == 1) {
                write(0, &b, 1);
                ft_putchar(&a);
            } else if (j == y) {
                write(0, &b, 1);
                ft_putchar(&a);
            }
            */

            /* Write nada */
            else {
                ft_putchar(empty);
            }
            /*

            printf("J: %d\n", j);
            printf("I: %d\n", i);
            */
            j++;
        }
        /* Write new line */\
        ft_putchar('\n');
        i++;
        j = 0;
        
    }
}
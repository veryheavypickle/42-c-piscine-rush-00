#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void    rush (int x, int y){

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
}

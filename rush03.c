#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void    rush (int y, int x){

    int i = 0;
    int j = 0;
    int rows = x - 1;
    int colummns = y - 1;

    while (i <= colummns){
        while (j <= rows) {
            if (j == 0  && i == 0) {
                ft_putchar('1');
            }
            else if (j == 0 && i == colummns) {
                ft_putchar('2');
            }

            else if (j == rows && i == 0) {
                ft_putchar('3');
            }
            else if (j == rows && i == colummns) {
                ft_putchar('4');
            } else {
                ft_putchar(' ');
            }
            /*
            printf("j: %d\ni: %d\n", j, i);
            printf("x: %d\ny: %d\n\n", x, y);
            */
            j++;
        }
        j = 0;
        i++;
        /* Write new line */
        ft_putchar('\n');
        
    }
}

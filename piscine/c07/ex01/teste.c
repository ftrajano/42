#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (n < 0)
    {
        ft_putchar('-');
        ft_putnbr(-n);
    }
    else if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
    {
        ft_putchar(n + '0');
    }
}

int main(int argc, char **argv)
{
    ft_putnbr(atoi(argv[1]));
    ft_putchar('\n');
    return 0;
}


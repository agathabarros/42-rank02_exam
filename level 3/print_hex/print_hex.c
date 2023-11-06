#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    while(str[i] >= 7 && str[i] <= 13 || str[i] == 32)
        i++;
    if (str[i] >= 43 && str[i] <= 45)
    {
        if(str[i] == 45)
            sign *= -1;
        i++;
    }
    while(str[i] >= 48 && str[i] <= 57)
    {
        res *= 10;
        res += str[i] -48;
        i++;
    }
}
void print_hex(int n)
{
    char *base = "0123456789abcdef";

    if(n > 16)
        print_hex(n / 16);
    ft_putchar(base[n % 16]);
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        long n = ft_atoi(av[1]);
        if(n>= 0)
            print_hex(n);
    }
    write(1, "\n", 1);
}
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_atoi(char *s)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    while(s[i] == ' ' && s[i] == '\t')
        i++;
    if(s[i] == '-' || s[i] == '+')
    {
        if(s[i] ==  '-')
            sign = -1;
        i++;
    }
    while(s[i] >= 48 && s[i] <= 57)
    {
        res *= 10;
        res += s[i] - 48;
        i++;
    }
    return (res *sign);
}
int is_prime(long num)
{
    if(num < 2)
        return(0);
    int i = 2;
    while(i * i <= num)
    {
        if(num % i == 0)
            return(0);
        i ++;
    }
    return(1);
}

void putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n =-n;
    }
    if(n>9)
        putnbr(n/10);
    ft_putchar(n% 10 + '0');
}
void add_prime_sum(int n)
{
    int i = 0;
    int sum = 0;
    if(i <= n)
    {
        if(is_prime(i))
            sum += i;
        i++;
    }
    putnbr(n);
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        long n = ft_atoi(av[1]);
        if(n >= 0)
            add_prime_sum(n);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}
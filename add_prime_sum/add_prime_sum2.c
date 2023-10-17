#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_atoi(char *s) // convert a string to an integer
{
    int res = 0;
    int sign = 1;
    int i = 0;

   
    if(s[i] == '-' || s[i] == 0)
        return(res);
    while(s[i] >= '0' && s[i] <= '9')
    {
        res *= 10;
        res += s[i] - '0';
        i++;
    }
    return(sign * res);
}
int is_prime(long n) // check if a number is prime
{
    if(n <= 1)
        return(0);
    int i = 2;
    while(i * i <= n) // check if i is a divisor of n
    {
        if(n % i == 0) // if i is a divisor of n, n is not prime
            return(0); // return 0
        i++; // move to the next number
    }
    return(1);
}
void putnbr(long n)
{
    if(n<0)
    {
        ft_putchar('-');
        n= -n;
    }
    if(n >9)
        putnbr(n/10);
    ft_putchar(n%10 +'0');
}
void add_prime_sum(int n)
{
    int i = 2; // start from 2
    int sum = 0;
    while( i <= n) // while i is less than or equal to n
    {
        if(is_prime(i) == 1) // if i is prime
            sum += i; // add i to the sum
        i++;
    }
    putnbr(sum); // print the sum
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        long n = ft_atoi(av[1]); // convert the string to an integer
        if(n >= 0)
            add_prime_sum(n); // print the sum of the prime numbers
    }
    else
        write(1, "0", 1);        
    write(1, "\n", 1);
}
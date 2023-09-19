#include <stdlib.h>
#include <stdio.h>

int count(long int n)
{
    long int len;

    len =0;
    if(n <= 0)
        len++;
    while(n != 0)
    {
        n /= 10;
        len++;
    }
    return(len);
}
char auxx(char *aux, long int len, int n, int i)
{
    aux[len] = '\0';
    while( i + 1 < len)
    {
        aux[len - 1] = (n % 10) + '0';
        n /= 10;
        len--;
    }
    return(*aux);
}
char *ft_itoa(int nbr)
{
    int i;
    long int len;
    char *aux;

    i =-1;
    len = count(nbr);
    aux = malloc(sizeof(char) * (len + 1));
    if(!(aux))
        return(NULL);
    if(nbr == -2147483648)
    {
        aux[0] = '-';
        aux[1] = '2';
        nbr = 147483648;
        i = 1;
    }
    else if(nbr < 0)
    {
        aux[0] = '-';
        nbr *= -1;
    }
    auxx(aux, len, nbr, i);
    return(aux);

}


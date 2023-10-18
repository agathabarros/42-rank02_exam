#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
    if(str_base < 2 || str_base > 16)
        return(0);

    int res = 0;
    int sign = 1;
    while(*str == ' ' || *str == '\t')
        str++;
    if(*str == '-' || *str == '+')
    {
        if(*str == '-')
            sign = -1;
        str++;
    }
    while(*str)
    {
        int dig = 0;
        if(*str >= '0' && *str <= '9' )
            dig = *str - '0';
        else if(*str >= 'a' && *str <= 'f' )
            dig = *str - 'a' + 10;
        else if(*str >= 'A' && *str <= 'F' )
            dig = *str - 'A' + 10;
        else
            break;
        if(dig >= str_base)
            break;
        res = res * str_base +dig;
        str++;   
    }
    return(sign *res);
}
/*int main(void)
{
    printf("%d\n", ft_atoi_base("a", 16));
    printf("%d\n", ft_atoi_base("fF", 16));
    printf("%d\n", ft_atoi_base("12fdb3", 16));
    printf("%d\n", ft_atoi_base("10", 2));
}*/
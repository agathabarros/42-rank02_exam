/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 07:10:56 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/01 07:21:01 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    return(c);
}
int get_digit(char c, int dig_base)
{
    int max_dig;
    if (dig_base <= 10)
        max_dig = dig_base + '0';
    else
        max_dig = dig_base - 10 + 'a';

    if (c >= '0' && c <= '9' && c <= max_dig)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max_dig)
		return (10 + c - 'a');
	else
		return (-1);   
}
int	ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign = 1;
    int dig;
    
    if (*str == '-')
    {
        sign = -1;
        ++str;
    }
    while((dig =get_digit(to_lower(*str), str_base)) >= 0)
    {
        res = res * str_base;
        res = res + (dig * sign);
        ++str;
    }
    return(res);
}

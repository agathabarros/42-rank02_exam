/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:01:20 by agathabarro       #+#    #+#             */
/*   Updated: 2023/08/31 14:37:30 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
    sign = 1;
    result = 0;
    while (str[i] >= 7 && str[i] <= 13 || str[i] == 32)
    {
        i++;
    }
    while (str[i] >= 43 && str[i] <= 45)
    {
        if (str[i] == 45)
            sign *= -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        result *= 10;
        result += str[i] - 48;
        i++;
    }
    return(result * sign);
}

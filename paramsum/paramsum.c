/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:34:41 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/12 16:50:02 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_punbr(int n)
{
    char digit;
    
    if (n > 10)
        ft_punbr(n/10);
    digit = (n % 10) + '0';
    write(1, &digit, 1);
}

int main(int ac, char **av)
{
    
    
    av = 0;
    ft_punbr (ac - 1);
    write(1, "\n", 1);
    return(0);
}
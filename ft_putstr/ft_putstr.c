/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:49:52 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/07 17:58:24 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}
int main(int ac, char **av)
{
    if(ac == 2)
        ft_putstr(av[1]);
    write(1, "\n", 1);
}

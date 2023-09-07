/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:53:31 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/06 18:17:44 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void rotone(char *s)
{
    while(*s)
    {
        if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
            ft_putchar(*s + 1);
        else if (*s == 'Z' || *s == 'z')
            ft_putchar(*s - 25);
        else
            ft_putchar(*s);
        ++s;
    }
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:24:39 by agathabarro       #+#    #+#             */
/*   Updated: 2023/08/31 14:35:09 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int ac, char **av)
{
	int	repeat;

	if (ac == 2)
	{
		while (*av[1] != '\0')
		{
			repeat = count(*av[1]);
			while (repeat--)
				write (1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
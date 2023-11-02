/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:43:11 by agathabarro       #+#    #+#             */
/*   Updated: 2023/10/22 16:54:35 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int pgcd(int a, int b)
{
    if(b == 0)
        return(a);
    else    
        return(pgcd(b, a %b));
}
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		if (a >= 0 && b >= 0)
			printf("%d", pgcd(a, b));
	}
	printf("\n");
}
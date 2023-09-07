/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:03:09 by agathabarro       #+#    #+#             */
/*   Updated: 2023/08/31 18:25:33 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;
    int num;
    
    if (ac == 2)
    {
        i = 1;
        num = atoi(av[1]);
        if (num == 1)
            printf("1");
        while (num >= ++i)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                if (num == i)
                    break;
                printf("*");
                num /= i;
                i = 1;
            }
        }
    }
    printf("\n");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 06:53:42 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/01 06:58:08 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    
    if (ac == 2)
    {
        while (av[1][i])
            i++;
        while (i)
        {    
            i--;
            write(1, &av[1][i], 1);
        }
    }
    write (1, "\n", 1);
    return(0);
}
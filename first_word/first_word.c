/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:38:04 by agathabarro       #+#    #+#             */
/*   Updated: 2023/08/31 21:06:40 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    
    i = 0;
    if (ac == 2)
    {
        while (av[1][i] == 32 || av[1][i] == 9)
            i++;
        while ((av[1][i] != 32 && av[1][i] != 9) && av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
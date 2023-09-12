/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:58:51 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/07 18:22:02 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    char str;

    i = 0;
    if (ac == 2)
    {
        while(av[1][i])
        {
            str = av[1][i];
            if ('A' <= av[1][i] && 'Z' >= av[1][i])
                str = 'Z' - av[1][i] + 'A';
            if ('a' <= av[1][i] && 'z' >= av[1][i])
                str = 'z' - av[1][i] + 'a';
            write(1, &str, 1);
            i ++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
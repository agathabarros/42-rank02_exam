/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:30:00 by agathabarro       #+#    #+#             */
/*   Updated: 2023/09/07 18:40:22 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int flag;

    if (ac == 2)
    {
        i = 0;
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while(av[1][i])
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
                flag = 1;
            if(av[1][i] != ' ' && av[1][i] != '\t')
            {
                if(flag == 1)
                    write(1, "   ", 3);
                flag = 0;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
}
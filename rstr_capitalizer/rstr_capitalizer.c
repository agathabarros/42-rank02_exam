/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathabarros <agathabarros@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:29:51 by agathabarro       #+#    #+#             */
/*   Updated: 2023/08/31 17:48:54 by agathabarro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr_capitalizar(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' \
                    || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32; 
        write(1, &str[i++], 1);
    }
}
int main(int ac, char **av)
{
    int i;

    if (ac == 1)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < ac)
        {
            rstr_capitalizar(av[i]);
            write(1, "\n", 1);
            i += 1;
        }
    }
    return(0);
}